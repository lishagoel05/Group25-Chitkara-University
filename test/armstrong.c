#include<stdio.h>
int armstrong(int a);
int ld=0;
int p=0;
int s=0;
int n=a;
while(n!=0){
    ld=n%10;
    p=ld*ld*ld;
    s=s+p;
    n=n/10;
}
if(s==a){
    return 0;
}
else{
    return 1;
}
int main(){
    int a;
    printf("enter a: ");
    scanf("%d",&a);
    if(armstrong(a)==0){
        printf("number is armstrong");
    }
    else{
        printf("number is not armstrong");
    }
}