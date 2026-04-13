#include <stdio.h>
int main()
{   int sub[5];
    double percent = 0.0;
    printf("Enter the marks of 5 subjects \n");
    for(int i=0;i<5;i++)
    {
        scanf("%d", &sub[i]);
        if (sub[i]>=40)
        {
            printf("PASS \n");
        }
        else
        {
            printf("FAIL \n");
        }
        percent = percent + sub[i];
    }
    percent = (percent/500) * 100;
        if(percent>=40 && percent<50)
        {
            printf("Third Division overall\n");
        }
        else if (percent>=50 && percent<60)
        {
            printf("Second Division overall\n");
        }
        else if (percent>=60 && percent<75)
        {
            printf("First Division overall\n");
        }
        else
        {
            printf("Distinction overall\n");
        }
    printf("percent => %f", percent);
    return 0;
}