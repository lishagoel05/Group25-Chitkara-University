#include<stdio.h>
int main(){
    int s,p,r,t;
    printf("enter p,r and t: \n");
    scanf("%d %d %d",&p,&r,&t);
    /*s-simple interest
    p-principal
    r-rate of interest
    t-no of years*/
    s=(p*r*t)/100;
    printf("the simple interest is: %d \n",s);
    return 0;

}