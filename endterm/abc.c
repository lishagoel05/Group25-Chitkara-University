#include<stdio.h>
int main(){
    int a,b,c,d,e,num,rev;
    printf("enter the number: ");
    scanf("%d",&num);
    e=num%10;
    d=(num/10)%10;
    c=(num/100)%10;
    b=(num/1000)%10;
    a=num/10000;
    rev=e*10000+d*1000+c*100+b*10+a;
    if(rev==num){
        printf("the reversed number is %d \n",rev);
    }
    else{
        printf("number not reversed");
    }
    return 0;
}