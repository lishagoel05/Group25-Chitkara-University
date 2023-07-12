#include<stdio.h>
int main(){
    int a,n;
    printf("enter n: \n");
    scanf("%d",&n);
    int sum=0;
    while(n>0){
        a=n%10;
        n=n/10;
        sum+=a;
    }
    printf("the sum of digit is %d \n",sum);
    return 0;
}