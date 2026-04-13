#include <stdio.h>
#include <math.h>

int main() 
{
    int num, choice, i, j, isPrime = 1;
    long long fact = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("\n1.Square Root\n2.Square\n3.Cube\n4.Prime Check\n5.Factorial\n6.Prime Factors\n");
    printf("Choice: ");
    scanf("%d", &choice);

    switch(choice) 
    {
        case 1:
            if(num >= 0) printf("Square Root = %.2f", sqrt(num));
            else printf("Invalid input for Square Root.");
            break;
        case 2: printf("Square = %d", num * num); break;
        case 3: printf("Cube = %d", num * num * num); break;
        case 4:
            for(i = 2; i <= num/2; i++) 
            {
                if(num % i == 0) 
                { isPrime = 0; break; }
            }
            if(isPrime && num > 1) printf("Prime"); else printf("Not Prime");
            break;
        case 5:
            if(num < 0) printf("Negative number error.");
            else 
            {
                for(i = 1; i <= num; i++) fact *= i;
                printf("Factorial = %lld", fact);
            }
            break;
        case 6:
            printf("Prime Factors: ");
            for(i = 2; i <= num; i++) 
            *{
                while(num % i == 0) { printf("%d ", i); num /= i; }
            }
            break;
        default: printf("Invalid Choice");
    }
    return 0;
}