#include<stdio.h>
int main(){
    int bc,hra,da,gs;
    /*bc-basic salary
    gs-gross salary*/
    printf("enter basic salary: ");
    scanf("%d",&bc);
    if(bc<1500){
        hra=0.1*bc;
        da=0.9*bc;
        gs=bc+hra+da;
        printf("the gross salary is: %d \n",gs);
    }
    else{
        hra=500;
        da=0.98*bc;
        gs=bc+hra+da;
        printf("the basic salary is: %d \n",gs);
    }
    return 0;
}