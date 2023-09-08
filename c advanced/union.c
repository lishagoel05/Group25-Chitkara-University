/*#include<stdio.h>
union un{
    int i;
    float f;
    char c;
};
int main(){
    union un u1;
    u1.i= 90;
    printf("%d\n",u1.i);
    printf("%f\n",u1.f);
    printf("%c\n",u1.c);
    return 0;
}*/

#include<stdio.h>
union un{
    int i;
    float f;
    char c;
};
void print_union(union un u1){
    printf("%d,\t %f,\t %c\n",u1.i,u1.f,u1.c);
}
int main(){
    union un u1;
   // print_union(u1);
    u1.i= 90;
    print_union(u1);
    u1.f=3.14;
    print_union(u1);
    u1.c='f';
    print_union(u1);
    printf("size of union %d",(sizeof(u1)));
    return 0;
}