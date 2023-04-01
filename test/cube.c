#include<stdio.h>
int cube(int n);
int main(){
    int n;
    printf("enter n: ");
    scanf("%d",&n);
    printf("the cube of number is %d",cube(n));
    return 0;
}
int cube(int n){
    return n*n*n;
}