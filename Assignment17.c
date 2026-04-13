#include <stdio.h>
#include <math.h>

long long factorial(int n) 
{
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

int main() 
{
    double x, sum = 0;
    int terms, i;
    printf("Enter value of x (in radians): ");
    scanf("%lf", &x);
    printf("Enter number of terms: ");
    scanf("%d", &terms);

    for (i = 1; i <= terms; i++) 
    {
        double term = pow(-1, i - 1) * pow(x, 2 * i - 1) / factorial(2 * i - 1);
        sum += term;
    }
    printf("Sum of sine series = %lf\n", sum);
    return 0;
}