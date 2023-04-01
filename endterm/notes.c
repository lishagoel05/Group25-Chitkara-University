#include<stdio.h>
int main(){
    int m,t,f,h;
    printf("enter m: ");
    scanf("%d",&m);
    t=m/10;
    f=m/50;
    h=m/100;
    printf("no of notes of ten,fifty and hundred: %d %d %d", t , f , h);
    return 0;
}