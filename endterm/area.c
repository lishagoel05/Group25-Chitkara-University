#include<stdio.h>
int main(){
    int l,b,r;
    /*l-length of rectangle
    b-breadth of rectangle
    r-radius of rectangle*/
    printf("enter l,b and r: ");
    scanf("%d %d %d",&l,&b,&r);
    int a,p,ac,c;
    /*a-area of rectangle
    p-perimeter of rectangle
    ac-area of circle
    c-circumference of circle*/
    a=l*b;
    p=2*(l+b);
    c=2*3.14*r;
    ac=3.14*r*r;
    printf("area of rectangle: %d \n",a);
    printf("perimeter of rectangle: %d \n",p);
    printf("area of circle: %d \n",ac);
    printf("circumference of circle: %d \n",c);
    return 0;
}