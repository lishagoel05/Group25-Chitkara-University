#include<stdio.h>
typedef struct{
    char name[25];
    int id;
}stu;

//typedef - reversed keyword that gives a exsisting datatype a nickname

int main(){

    stu stu1={"lisha",546842168};
    stu stu2={"goel",157896574};

    printf("%s\n",stu1.name);
    printf("%d\n",stu1.id);
    printf("\n");
    printf("%s\n",stu2.name);
    printf("%d\n",stu2.id);

    return 0;
}