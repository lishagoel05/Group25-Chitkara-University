#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter a,b and c: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && c>b){
        printf("b is youngest");
    }
    else if(b>a && c>a){
        printf("a is youngest");
    }
    else{
        printf("c is youngest");
    }
    return 0;
}