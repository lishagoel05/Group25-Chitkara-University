#include<stdio.h>
inline int square(){
    int n,x;
    printf("enter x: ");
    scanf("%d",&x);
    n=x*x;
    printf("the square of x is: %d",n);
    return 25;
}

int main(){
    square();
    return 0;
}