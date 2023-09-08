#include<stdio.h>
int main(){
    FILE * ptr = fopen("1.c","r");
    //task
    if(ptr==0) printf("file not opened \n");
    else printf("file opened \n");
    fclose(ptr);
    return 0;
}
  // r=read mode; w=write mode; a=append mode.
#include<stdio.h>
int main(){
    FILE * ptr = fopen("1.c","a");
    //task
    if(ptr==0) printf("file not opened \n");
    else printf("file opened \n");
    fprintf(ptr,"\n%d",15);
    fclose(ptr);
    fseek(ptr,0,SEEK_SET); 
    return 0;
}