#include<stdio.h>
// rb wb ab rb+ wb+ ab+  //RB - Read binary, WB -Write binary,  AB - Append binary
struct st{
    int i;float f;
};
int main(){
    struct st s1={10,3.14},s2;
    FILE*ptr=fopen("1.c","wb+");
    //fwrite(&variable, run_of_variable, sizeof(variable),file_ptr);
    fwrite(&s1, 1, sizeof(s1),ptr);
    //rewind(ptr);
    F_SEEK(ptr, 0);
    fread(&s2,1, sizeof(s2),ptr);
    //remove("data.txt");
    fclose(ptr);
    printf("%d, %f\n",s2.i,s2.f);
    return 0;
}
//for seek name of file is written 
//for other commands ptr is written