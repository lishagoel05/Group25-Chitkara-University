#include<stdio.h>
int main(){
    float x,y,sum,pro;
    printf("enter x and y: ");
    scanf("%f %f",&x,&y);
    sum=x+y;
    printf("sum is: %f \n",sum);
    pro=x*y;
    printf("product is: %f",pro);
    return 0;
}