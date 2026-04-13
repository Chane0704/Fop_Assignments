#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    int count, i;
    printf("Enter how many random numbers you want: ");
    scanf("%d", &count);
    srand(time(NULL));
    printf("Pseudo Random Numbers: ");
    for (i = 0; i < count; i++) 
    {
        printf("%d ", rand());
    }
    return 0;
}