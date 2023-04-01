#include<stdio.h>
int main(){
    int q,r,t,d=0;
    /*q-quantity
    r-rate
    d-discount
    t-total*/
    printf("enter quantity and rate: ");
    scanf("%d %d",&q,&r);
    if(q>1000){
        d=10;
        t=(q*r)-(q*r*0.1);
        printf("the total expense is: %d",t);
    }
    return 0;
}