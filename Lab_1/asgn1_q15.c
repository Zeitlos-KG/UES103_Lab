/* Name - Krishiv Gupta
Group No. - 1A82
Roll No. - 1025030444
Academic Year - 2025-2026 ODD_SEM */

#include<stdio.h>
int main(){

    int roll_no = 1025030444;
    char Name[50] = "Krishiv Gupta";

    float basic,gross_salary;
    printf("enter your basic salary: \n");
    scanf("%f",&basic);
    gross_salary = basic*(1+0.10+0.12);
    printf("your gross salary is: %f",gross_salary);

    printf("\n\nCoded by Krishiv Gupta - %d\n\n",roll_no);
    
    return 0;
}