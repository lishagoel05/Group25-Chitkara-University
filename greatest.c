#include<stdio.h>
int main(){
    int x,y;
    printf("enter x and y: ");
    scanf("%d %d",&x,&y);
    if(x>y){
        printf("x is greatest: %d",x);
    }
    else{
        printf("y is greatest: %d",y);
    }
    return 0;
}