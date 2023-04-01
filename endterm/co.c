#include<stdio.h>
int main(){
    char a;
    printf("enter a: ");
    scanf("%c",&a);
    a>='a' && a<='z' ? printf("lowercase"):printf("not lowercase");
    return 0;
}