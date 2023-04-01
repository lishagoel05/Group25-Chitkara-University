#include<stdio.h>
int main(){
    int t;
    /*t-temperature in a city in fahrenheit*/
    printf("enter t: ");
    scanf("%d",&t);
    int c;
    /*c is temperature in celcius*/
    c=(t-32)*5/9;
    printf("temperature in celcius is: %d",c);
    return 0;
}