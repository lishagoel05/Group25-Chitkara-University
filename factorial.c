#include<stdio.h>
int main(){
    int n,c,f=1;
    printf("enter n: ");
    scanf("%d",&n);
    for(c=1;c<=n;c++){
        f=c*f;
    }
    printf("factorial of number is %d",f);
    return 0;
}