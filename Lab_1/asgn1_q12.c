/* Name - Krishiv Gupta
Group No. - 1A82
Roll No. - 1025030444
Academic Year - 2025-2026 ODD_SEM */

#include<stdio.h>
#include<math.h>
int main(){

    int roll_no = 1025030444;
    char Name[50] = "Krishiv Gupta";

    int r;
    float A;
    printf("enter the radius the of the circle: \n");
    scanf("%d",&r);
    A = 22*pow(r,2)/7;
    printf("the area of the circle is: %f",A);

    printf("\n\nCoded by Krishiv Gupta - %d\n\n",roll_no);
    
    return 0;
}