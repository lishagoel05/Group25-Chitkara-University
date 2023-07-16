#include<stdio.h>
#include<math.h>
int main(){
    int a ,b, c; /*a b and c are sides of triangle*/
    printf("enter a and b: \n");
    scanf("%d %d",&a,&b);
    c=sqrt(pow(a,2)+pow(b,2));
    printf("the hypotenouse of triangle is: %d",c);
    return 0;
}