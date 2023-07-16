#include<stdio.h>
int main(){
    char operator;
    int a,b,r;
    printf("enter operator(+,-,*,/): ");
    scanf("%c",&operator);
    printf("\n enter a and b: ");
    scanf("%d %d",&a,&b);
    switch(operator){
        case'+':
         r=a+b;
         printf("result is %d",r);
         break;
        case'-':
         r=a-b;
         printf("result is %d",r);
         break;
        case'*':
         r=a*b;
         printf("result is %d",r);
         break;
         case'/':
         r=a/b;
         printf("result is %d",r);
         break;
        default:
         printf("invaid operator");
    }
    return 0;
}