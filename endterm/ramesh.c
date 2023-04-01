#include<stdio.h>
int main(){
    int bs;
    float dr,hr,gs;
    printf("enter the basic salary: \n");
    scanf("%d",bs);
    /*bs-basic salary
    dr-dearness
    hr-houserent
    gs-gross salary*/
    dr=0.4*bs;
    hr=0.2*bs;
    gs=bs-hr-dr;
    printf("dearness: %f \n",dr);
    printf("houserent: %f \n",hr);
    printf("the gross salary is: %f \n",gs);
    return 0;
}