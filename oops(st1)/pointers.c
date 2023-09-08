#include<stdio.h>
/*pointer - a variable like reference that holds a memory like address to another variable 
some tasks are performed easily by pointers
* - indirection operator(value of address) */



int main(){
    int age=21;
    int *p=&age;

    printf("size of age: %d bytes \n",sizeof(age));
    printf("size of p: %d bytes \n",sizeof(p));
    printf("address of age: %p\n",&age);
    printf("value of age: %p\n",p);
    printf("value of age: %d\n",age);
    printf("value at stored address: %d\n",*p);

    return 0;
}