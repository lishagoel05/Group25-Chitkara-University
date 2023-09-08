#include<stdio.h>
struct abc{
    char a;
    char b;
    int c;
};

struct def{
    char d;
    int e;
    char f;
};

struct xyz{
    int x;
    char y;
    char z;
};

int main(){
    struct abc var;
    struct def stu;
    struct xyz user;

    printf("%d \n",sizeof(var));
    printf("%d \n",sizeof(stu));
    printf("%d \n",sizeof(user));

    return 0;
}