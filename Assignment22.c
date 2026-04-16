#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100], temp[100];
    int choice;

    printf("1. Length\n2. Copy\n3. Concatenate\n4. Compare\nEnter choice: ");
    scanf("%d", &choice);
    getchar(); // Clear newline from buffer

    printf("Enter first string: ");
    gets(str1);

    switch (choice)
    {
        case 1:
        {
            printf("Length: %lu\n", strlen(str1));
            break;
        }
        case 2:
        {
            strcpy(temp, str1);
            printf("Copied string: %s\n", temp);
            break;
        }
        case 3:
        {
            printf("Enter second string: ");
            gets(str2);
            strcat(str1, str2);
            printf("Concatenated: %s\n", str1);
            break;
        }
        case 4:
        {
            printf("Enter second string: ");
            gets(str2);
            if (strcmp(str1, str2) == 0)
            {
                printf("Strings are equal.\n");
            }
            else
            {
                printf("Strings are not equal.\n");
            }
            break;
        }
        default:
        {
            printf("Invalid choice!\n");
        }
    }

    return 0;
}