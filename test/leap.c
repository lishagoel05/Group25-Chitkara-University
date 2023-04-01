#include<stdio.h>
int leap(int n);
int main(){
    int n;
    printf("enter n: ");
    scanf("%d",&n);
    printf("it is %d \n",leap(n));
    return 0;
}
int leap(int n){
    if(n%4==0){
        printf("leap year \n");
    }
    else{
        printf("not a leap year \n");
    }
    return n;
}