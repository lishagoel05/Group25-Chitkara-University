#include<stdio.h>
int main(){
    int sum,num,a,b,c,d;
    printf("enter number: ");
    scanf("%d",&num);
    d=num%10;
    c=(num/10)%10;
    b=(num/100)%10;
    a=(num/1000);
    sum=a+d;
    printf("the sum of first and last digit is: %d",sum);
    return 0;
}