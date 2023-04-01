#include<stdio.h>
#include<math.h>
int square(int a);
int circle(int r);
int rect(int x,int y);
int main(){
    int a;
    printf("enter a: \n");
    scanf("%d",&a);
    int s=square(a);
    printf("area is square is: %d \n",s);
    int r;
    printf("enter r: \n");
    scanf("%d",&r);
    int c=circle(r);
    printf("area of circle is: %d \n",c);
    int x,y;
    printf("enter x and y: \n");
    scanf("%d %d",&x,&y);
    int o=rect(x,y);
    printf("area of rectangle is %d \n",o);
    return 0;
}
int square(int a){
    return a*a;
}
int circle(int r){
    return 3.14*r*r;
}
int rect(int x,int y){
    return x*y;
}
