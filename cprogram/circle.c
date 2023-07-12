#include<stdio.h>
int main(){
    int r; //r-radius
    printf("enter the value of r: ");
    scanf("%d",&r);
    float cir,area ; /*cir-circumference of the circle 
    area- area of circle*/
    area=3.14*r*r;
    cir=2*3.14*r;
    printf("\n the area of circle is: %f",area);
    printf(" \n the circumference of the circle is %f",cir);
    return 0;
}