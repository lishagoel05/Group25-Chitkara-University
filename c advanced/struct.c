#include<stdio.h>
#include<string.h>
struct student{
    char name[50];
    int roll;
    int percent;
};

/*struct - collection of relatable members(variables)
they can be of different datatypes
listed under one name in a block of memory
very similar to classes in other language(no methods)*/

int main(){
    struct student st1;
    struct student st2;

    strcpy(st1.name,"lisha goel");
    st1.roll=542;
    st1.percent=9.4;

    strcpy(st2.name,"bansal");
    st2.roll=589;
    st2.percent=7.2;

    printf("%s \n",st1.name);
    printf("%d \n",st1.roll);
    printf("%d \n",st1.percent);
    printf("%s \n",st2.name);
    printf("%d \n",st2.roll);
    printf("%d \n",st2.percent);

    return 0;
}