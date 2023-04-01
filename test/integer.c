#include<stdio.h>
int sum(int a,int b, int c,int d,int e);
int avg(int a,int b, int c,int d,int e);
int main(){
    int a,b,c,d,e;
    printf("enter a,b,c,d and e: ");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    printf("the sum is: %d \n",sum(a,b,c,d,e));
    printf("the average: %d \n",avg(a,b,c,d,e));
}
int sum(int a,int b, int c,int d,int e){
    int s=a+b+c+d+e;
    return s;
}
int avg(int a,int b, int c,int d,int e){
    int x=(a+b+c+d+e)/5;
    return x;
}
