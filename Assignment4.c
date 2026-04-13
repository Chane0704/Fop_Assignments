#include <stdio.h>

int main() {
    float basicPay, hra, ta, grossSalary, professionalTax, netSalary;

    printf("Enter Basic Pay: ");
    scanf("%f", &basicPay);


    hra = 0.10 * basicPay;        
    ta = 0.05 * basicPay;           
    grossSalary = basicPay + hra + ta;

    professionalTax = 0.02 * grossSalary;  
    netSalary = grossSalary - professionalTax;


    printf("\nHRA: %.2f", hra);
    printf("\nTA: %.2f", ta);
    printf("\nGross Salary: %.2f", grossSalary);
    printf("\nProfessional Tax: %.2f", professionalTax);
    printf("\nNet Salary Payable: %.2f", netSalary);

    return 0;
}
