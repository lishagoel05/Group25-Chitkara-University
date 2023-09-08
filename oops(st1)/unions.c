/* unions - user defined data type which same same memory location*/
#include<stdio.h>

// union abc{
//     int a;
//     char b;
// }var;

// int main(){
//     var.a=65;
//     printf("a=%d\n",var.a);
//     printf("b=%c",var.b);
//     return 0;
// }

//size is tken acc of the largert member of the union

// union abc{
//     int a;
//     char b;
//     double c;
//     float d;
// };

// int main(){
//     printf("%ld",sizeof(union abc));
//     return 0;
// }

//union of pointer is assced by arrow operator

union abc{
    int a;
    char b;
}var;

int main(){
    union abc var;
    var.a=90;
    union abc *p=&var;
    printf("%d %c",p->a,p->b);
    return 0;
}