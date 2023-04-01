#include<stdio.h>
int main(){
    int cp,sp,p,l;
    printf("enter sp and cp: ");
    scanf("%d %d",&sp,&cp);
    if(cp<sp){
        printf("its a profit \n");
        p=sp-cp;
        printf("the profit is %d \n",p);
    }
    else{
        printf("its a loss \n");
        l=cp-sp;
        printf("a loss of %d \n",l);
    }
    return 0;
}