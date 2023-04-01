#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter a,b and c: ");
    scanf("%d %d %d",&a,&b,&c);
    int s=a+b+c;
    if(s==180){
        printf("it is a triangle");
    }
    else{
        printf("not a triangle");
    }
    return 0;
}