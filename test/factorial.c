#include<stdio.h>
int fact(int n);
int main(){
    int n,i;
    printf("enter n: ");
    scanf("%d",&n);
    printf("the factorial is %d",fact(n));
    return 0;
}
int fact(int n){
    int f=1;
    for(int i=1;i<=n;i++){
        f=f*i;
    }
    return f;
}
