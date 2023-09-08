#include<stdio.h>
#include<string.h>
struct parent{
    char member[20];
    struct child{
        char name[20];
        int year;
    }ch1,ch2;

};

int main(){
    struct parent m1;
    struct parent m2;

    strcpy(m1.member,"father");
    strcpy(m2.member,"mother");
    

    struct child ch1={"heyy",1999};
    struct child ch2={"doom",2004};

    printf("%s \n %s \n %d\n",m1.member,ch1.name,ch1.year);
    printf("%s \n %s \n %d",m2.member,ch2.name,ch2.year);

    return 0;
}