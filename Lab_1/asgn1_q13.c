/* Name - Krishiv Gupta
Group No. - 1A82
Roll No. - 1025030444
Academic Year - 2025-2026 ODD_SEM */

#include<stdio.h>
int main(){

    int roll_no = 1025030444;
    char Name[50] = "Krishiv Gupta";

    int SI,P,R,T;
    printf("enter the amount deposited: \n");
    scanf("%d",&P);
    printf("enter the rate of interest (per annum): \n");
    scanf("%d",&R);
    printf("enter the time (in years) for which the amount is deposited: \n");
    scanf("%d",&T);
    SI = P*R*T/100;
    printf("the simple interest is: %d",SI);

    printf("\n\nCoded by Krishiv Gupta - %d\n\n",roll_no);
    
    return 0;
}