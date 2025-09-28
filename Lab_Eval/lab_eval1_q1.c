#include<stdio.h>
int main(){

    long int num,max,min,temp,digit,num_f=1,factorial,sum=0,i;
    printf("Enter the minimum number of the range: ");
    scanf("%ld",&min);
    printf("Enter the maximum number of the range: ");
    scanf("%ld",&max);

    for(num=min; num<=max; num++){
    temp = num;
    sum=0;

    while(temp>0){
    digit = temp%10;
    num_f = 1;

    for(i=1; i<=digit; i++){
        num_f *= i;
    }

    factorial = num_f;
    sum += factorial;
    temp /= 10;

}
if (num == sum) printf("%ld ",num);
}

return 0;
}