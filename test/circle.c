#include<stdio.h>
int diameter(int i);
int circum(int i);
int area(int i);
int main(){
    int i;
    printf("enter i: ");
    scanf("%d",&i);
    printf("diameter is %d \n",diameter(i));
    printf("circumference is %d \n",circum(i));
    printf("area is %d \n",area(i));

    return 0;
}
int diameter(int i){
    return 2*i;
}
int circum(int i){
    return 2*3.14*i;
}
int area(int i){
    return 3.14*i*i;
}