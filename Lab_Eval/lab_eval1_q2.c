// Harshad Number - num is div by the sum of digits of num - user defined range
#include<stdio.h>
int main(){
int min,max,num,digit,temp,sum=0,i;
printf("Enter the minimum of range: ");
scanf("%d",&min);
printf("\nEnter the maximum of range: ");
scanf("%d",&max);
for(num=min;num<=max;num++){
    temp = num;
    sum = 0;
    while(temp>0){
    digit = temp%10;
    sum += digit;
    temp /= 10;
}
if (num%sum==0) printf("%d ",num);
}
return 0;
}