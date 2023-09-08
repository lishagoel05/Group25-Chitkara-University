#include<stdio.h>
#pragma pack(1)
struct abc{
    char a;
    char b;
    int c;
};
// #pragma - special purpose directive used to turn on or off certain features

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