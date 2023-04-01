#include<stdio.h>
int main(){
    int n;
    printf("enter year: ");
    scanf("%d",&n);
    (n%4==0) ? printf("leap year") : printf("not leap year");
    return 0;
}