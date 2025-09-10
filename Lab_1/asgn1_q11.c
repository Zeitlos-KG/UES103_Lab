/* Name - Krishiv Gupta
Group No. - 1A82
Roll No. - 1025030444
Academic Year - 2025-2026 ODD_SEM */

#include<stdio.h>
#include<math.h>
int main(){

    int roll_no = 1025030444;
    char Name[50] = "Krishiv Gupta";

    int a,n;
    double root;
    printf("enter the integer you want to find the nth root of: \n");
    scanf("%d",&a);
    printf("enter the value of n: \n");
    scanf("%d",&n);
    root = pow(a,1.0/n);
    printf("the %dth root of %d is:%f",n,a,root);

    printf("\n\nCoded by Krishiv Gupta - %d\n\n",roll_no);
    
    return 0;
}