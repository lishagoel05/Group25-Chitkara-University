#include<stdio.h>
int main(){
    int c,d,t=0;
    /*c-location 1
    d-location 2*/
    printf("enter c and d: ");
    scanf("%d %d",&c,&d);
    t=c;
    c=d;
    d=t;
    printf("c after swapping: %d \n",c);
    printf("d after swapping: %d \n",d);
    return 0;
}