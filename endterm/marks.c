#include<stdio.h>
int main(){
    int a,b,c,d,e;
    /*marks in 
    a-maths
    b-science
    c-english
    d-social
    e-hindi*/
    printf("enter a,b,c,d and e: ");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    float p;
    int am;
    /*am-aggregate marks
    p-percentage*/
    am=a+b+c+d+e;
    p=am/5;
    printf("the aggregate marks are: %d \n",am);
    printf("the percentage is: %f \n",p);
    return 0;
}