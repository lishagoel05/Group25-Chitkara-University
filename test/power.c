#include<stdio.h>
#include<math.h>
int power(int a,int b);
int main(){
    int a,b;
    printf("enter a and b: ");
    scanf("%d %d",&a,&b);
    printf("the power is %d",power(a,b));
    return 0;
}
int power(int a,int b){
    int p=pow(a,b);
    return p;
}