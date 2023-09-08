#include<stdio.h>
int main(){
    FILE*ptr=fopen("a.c","r");
    if(ptr==0) return 0;
    int count=0;
    char ch;
    while(!feof(ptr)){
        ch = fgetc(ptr);
        if(ch=='\n' || ch== ' ') count++;
    }
    printf("%d",count+1);
    fclose(ptr);
    return 0;
}