#include <stdio.h>

int main() 
{
    int num, originalNum, rem, sum = 0;
    printf("Enter a three-digit number: ");
    scanf("%d", &num);
    originalNum = num;
    while (num > 0) 
    {
        rem = num % 10;
        sum += (rem * rem * rem);
        num = num / 10;
    }
    if (sum == originalNum) 
    {
        printf("%d is an Armstrong number.\n", originalNum);
    } else {
        printf("%d is not an Armstrong number.\n", originalNum);
    }

    return 0;
}