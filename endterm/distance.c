#include<stdio.h>
int main(){
    int a;
    /*a-distance between two cities in km*/
    printf("enter a: ");
    scanf("%d",&a);
    float km,m,cm,i,f;
    /*km-kilometer
    m-meter
    cm-centimeter
    i-inches
    f-feet*/
    km=a;
    m=km*1000;
    cm=m*100;
    i=m*39.9;
    f=m*3.2;
    printf("kilometer: %f \n",km);
    printf("meter: %f \n",m);
    printf("centimeter: %f \n",cm);
    printf("inches: %f \n",i);
    printf("feet: %f \n",f);
    return 0;
}