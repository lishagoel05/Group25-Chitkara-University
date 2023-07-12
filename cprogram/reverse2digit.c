#include<stdio.h>
#include<string.h>
int main(){
    char str[20];
    printf("enter string: ");
    gets(str);
    printf("entered string is %s",str);
    int start=0,end=strlen(str)-1;
    while(start<end){
        char temp=str[start];
        str[start]=str[end];
        str[end]=temp;
        start++;
        end--;
    }
    printf("\n reverse order is: %s",str);
    return 0;
}