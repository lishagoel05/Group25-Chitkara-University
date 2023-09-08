#include<stdio.h>

struct student{
    char name[25];
    float cgpa;
};

int main(){
    struct student st1 = {"spongeboob" ,9.4};
    struct student st2 = {"heyyy" ,5.4};
    struct student st3 = {"doom" ,7.1};
    struct student st4 = {"alas" ,6.2};

    struct student st[]={st1,st2,st3,st4};

    for(int i=0; i<sizeof(st)/sizeof(st[0]); i++){
        printf("%s \t",st[i].name);
        printf("%f \n",st[i].cgpa);
    }

    return 0;
}