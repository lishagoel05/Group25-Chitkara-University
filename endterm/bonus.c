#include<stdio.h>
int main(){
    int b,yos,cy,yoj;
    /*b-bonus
    yos-year of joining
    cy-current year
    yoj-year of joining*/
    printf("enter year of joining and current year: ");
    scanf("%d %d",&yoj,&cy);
    yos=cy-yoj;
    if(yos>3){
        b=2500;
        printf("bonus of %d",b);
    }
    return 0;
}