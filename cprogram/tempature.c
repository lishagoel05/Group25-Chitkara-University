#include<stdio.h>
int main(){
    int f,c;
    /*f- fahrenheit
    c-celsius*/
    printf("enter celsius: \n");
    scanf("%d",&c);
    f=(c*(9/5))+32;
    printf("fahrenheit is %d",f);
    return 0;
}