#include<stdio.h>
int min(int a,int b);
int max(int a,int b);
int main(){
    int a,b;
    printf("enter a and b: ");
    scanf("%d %d",&a,&b);
    printf("the minimum number is %d \n",min(a,b));
    printf("the maximum number is %d \n",max(a,b));
    return 0;
}
int min(int a,int b){
    if(a>b){
        return a-b;
    }
    else{
        return b-a;
    }
}
int max(int a,int b){
    return a+b;
}