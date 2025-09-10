/* Name - Krishiv Gupta
Group No. - 1A82
Roll No. - 1025030444
Academic Year - 2025-2026 ODD_SEM */

#include<stdio.h>
#include<math.h>
int main(){

    int roll_no = 1025030444;
    char Name[50] = "Krishiv Gupta";

    float CI,FA,P,R,T;
    printf("enter the amount deposited: \n");
    scanf("%f",&P);
    printf("enter the rate of interest (per annum): \n");
    scanf("%f",&R);
    printf("enter the time (in years): \n");
    scanf("%f",&T);
    FA = P*pow((1+(R/100)),T);
    CI = FA - P;
    printf("the final amount is %f and the compound interest is %f",FA,CI);

    printf("\n\nCoded by Krishiv Gupta - %d\n\n",roll_no);
    
    return 0;
}