#include<stdio.h>
int roman(int n);
int main(){
    int n;
    printf("enter year: ");
    scanf("%d",&n);
    roman(n);
    return 0;
}
int roman(int n){
    if(n>=1000){
        printf("m");
        roman(n-1000);
    }
    else if(n>=500){
        printf("d");
        roman(n-500);
    }
    else if(n>=100){
        printf("c");
        roman(n-100);
    }
    else if(n>=50){
        printf("l");
        roman(n-50);
    }
    else if(n>=10){
        printf("x");
        roman(n-10);
    }
    else if(n>=5){
        printf("v");
        roman(n-5);
    }
    else if(n>=1){
        printf("i");
        roman(n-1);
    }
}
