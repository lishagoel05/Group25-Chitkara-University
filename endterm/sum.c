#include<stdio.h>
int main(){
    int a,b,c,d,e,num,sum;
    printf("enter num: ");
    scanf("%d",&num);
    e=num%10;
    d=(num/10)%10;
    c=(num/100)%10;
    b=(num/1000)%10;
    a=num/10000;
    sum=a+b+c+d+e;
    printf("the sum of digits: %d \n",sum);
    return 0;
}