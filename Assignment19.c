#include <stdio.h>
#include <string.h>

struct EMPLOYEE 
{
    char name[50], desig[50], gender[10], doj[20];
    float salary;
};

int main() 
{
    int n, mCount = 0, fCount = 0;
    printf("Enter number of employees: ");
    scanf("%d", &n);
    struct EMPLOYEE e[n];

    for(int i = 0; i < n; i++) 
    {
        // Must enter all 5 fields for the program to continue
        printf("Enter details for employee %d (Name Desig Gender DOJ Salary): ", i + 1);
        scanf("%s %s %s %s %f", e[i].name, e[i].desig, e[i].gender, e[i].doj, &e[i].salary);
        
        if(strcmp(e[i].gender, "Male") == 0) 
        {
            mCount++;
        }
        else 
        {
            fCount++;
        }
    }

    printf("\nTotal = %d\nMale = %d\nFemale = %d\n", n, mCount, fCount);
    
    for(int i = 0; i < n; i++) 
    {
        if(e[i].salary > 10000) 
        {
            printf("High Salary: %s\n", e[i].name);
        }
        if(strcmp(e[i].desig, "AsstManager") == 0) 
        {
            printf("Asst Manager: %s\n", e[i].name);
        }
    }
    return 0;
}