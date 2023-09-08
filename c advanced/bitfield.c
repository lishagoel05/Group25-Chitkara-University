#include<stdio.h>
struct date{
    int d:7;
    int m:7;
    int y:18;
};
int main(){
    struct date today;
    printf("%d\n",sizeof(today));
    return 0;
}

/*#include<stdio.h>
struct date{
    int d:7;
    int :0;
    int m:7;
    int y:18;
};
int main(){
    struct date today;
    printf("%d\n",sizeof(today));
    return 0;
}*/

#include<stdio.h>
struct date{
    int d:7;
    int :0;
    int m:7;
    int y:18;
};
int main(){
    struct date today;
    today.d=63;
    printf("%d\n",today.m);
    return 0;
}