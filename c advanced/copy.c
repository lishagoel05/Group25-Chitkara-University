/*#include<stdio.h>
int main(){
    FILE*og=fopen("1.c","r");
    FILE*cpy=fopen("copy_of_1.c","a");
    while(!feof(og)){
        char ch=fgetc(og);
        if(ch == EOF) break;
        fputc(ch,cpy);
    }
    fclose(og);fclose(cpy);
    return 0;
}*/
#include<stdio.h>
int main(){
    FILE*og=fopen("1.c","r");
    FILE*cpy=fopen("copy_of_1.c","w");
    char ch;
    while((ch=fgetc(og))!=EOF){
        if(ch == EOF) break;
        fputc(ch,cpy);
    }
    fclose(og);fclose(cpy);
    return 0;
}