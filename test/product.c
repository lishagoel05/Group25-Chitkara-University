#include<stdio.h>
float prod(float a,int b);
int main(){
    float a;
    int b;
    printf("enter a and b: ");
    scanf("%f %d",&a,&b);
    printf("the product of number is %f ",prod(a,b));
    return 0;
}
float prod(float a,int b){
    float p;
    p=a*b;
    return (p);
}
