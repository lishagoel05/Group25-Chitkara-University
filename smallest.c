#include<stdio.h>
int main(){
    int x,y,z;
    printf("enter x,y and z: ");
    scanf("%d %d %d",&x,&y,&z);
    if(x<y && x<z){
        printf("x is smallest: %d",x);
    }
    else if(y<x && y<z){
        printf("y is smallest: %d",y);
    }
    else{
        printf("z is smallest: %d",z);
    }
    return 0;
}