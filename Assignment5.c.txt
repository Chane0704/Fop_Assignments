/* Write a program in C to perform basic matrix operations:
1. Addition of two matrices
2. Saddle point of a matrix
3. Inverse of a matrix (2x2)
4. Magic square of a matrix
*/

#include <stdio.h>

int main() {
    int choice;
    printf("\n---- MATRIX OPERATIONS MENU ----\n");
    printf("1. Addition of two matrices\n");
    printf("2. Saddle point of a matrix\n");
    printf("3. Inverse of a 2x2 matrix\n");
    printf("4. Magic square of a matrix\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    /* 1. Addition of matrices */
    if (choice == 1) {
        int r, c;
        printf("Enter rows and columns: ");
        scanf("%d %d", &r, &c);

        int a[r][c], b[r][c], sum[r][c];

        printf("Enter first matrix:\n");
        for (int i = 0; i < r; i++)
            for (int j = 0; j < c; j++)
                scanf("%d", &a[i][j]);

        printf("Enter second matrix:\n");
        for (int i = 0; i < r; i++)
            for (int j = 0; j < c; j++)
                scanf("%d", &b[i][j]);

        printf("Sum of matrices:\n");
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                sum[i][j] = a[i][j] + b[i][j];
                printf("%d ", sum[i][j]);
            }
            printf("\n");
        }
    }

    /* 2. Saddle point */
    else if (choice == 2) {
        int r, c;
        printf("Enter rows and columns: ");
        scanf("%d %d", &r, &c);

        int m[r][c];
        printf("Enter matrix elements:\n");
        for (int i = 0; i < r; i++)
            for (int j = 0; j < c; j++)
                scanf("%d", &m[i][j]);

        int found = 0;

        for (int i = 0; i < r; i++) {
            int min = m[i][0], col = 0;

            for (int j = 1; j < c; j++) {
                if (m[i][j] < min) {
                    min = m[i][j];
                    col = j;
                }
            }

            int isSaddle = 1;
            for (int k = 0; k < r; k++) {
                if (m[k][col] > min) {
                    isSaddle = 0;
                    break;
                }
            }

            if (isSaddle) {
                printf("Saddle point = %d at position (%d, %d)\n", min, i, col);
                found = 1;
            }
        }

        if (!found)
            printf("No saddle point found.\n");
    }

    /* 3. Inverse of 2x2 matrix */
    else if (choice == 3) {
        int a[2][2];
        float inv[2][2];

        printf("Enter elements of 2x2 matrix:\n");
        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 2; j++)
                scanf("%d", &a[i][j]);

        int det = a[0][0] * a[1][1] - a[0][1] * a[1][0];

        if (det == 0) {
            printf("Inverse does not exist (determinant = 0)\n");
        } else {
            inv[0][0] =  a[1][1] / (float)det;
            inv[0][1] = -a[0][1] / (float)det;
            inv[1][0] = -a[1][0] / (float)det;
            inv[1][1] =  a[0][0] / (float)det;

            printf("Inverse matrix:\n");
            for (int i = 0; i < 2; i++) {
                for (int j = 0; j < 2; j++)
                    printf("%.2f ", inv[i][j]);
                printf("\n");
            }
        }
    }

    /* 4. Magic square */
    else if (choice == 4) {
        int n;
        printf("Enter order of square matrix: ");
        scanf("%d", &n);

        int m[n][n];
        printf("Enter matrix elements:\n");
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                scanf("%d", &m[i][j]);

        int sum = 0;
        for (int j = 0; j < n; j++)
            sum += m[0][j];

        int magic = 1;

        for (int i = 1; i < n; i++) {
            int rowSum = 0;
            for (int j = 0; j < n; j++)
                rowSum += m[i][j];
            if (rowSum != sum)
                magic = 0;
        }

        for (int j = 0; j < n; j++) {
            int colSum = 0;
            for (int i = 0; i < n; i++)
                colSum += m[i][j];
            if (colSum != sum)
                magic = 0;
        }

        if (magic)
            printf("It is a Magic Square.\n");
        else
            printf("It is NOT a Magic Square.\n");
    }

    else {
        printf("Invalid choice.\n");
    }

    return 0;
}
