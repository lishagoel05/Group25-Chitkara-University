//precedence of [] is higher than *

//declaration of pointer to array

#include<stdio.h>
int main(){
    int (*ptr)[10];
    return 0;
}

//declaration of pointer to function

#include<stdio.h>
int main(){
    int (*ptr)(int,int);
    return 0;
}

//address of function to function pointer

#include<stdio.h>
int main(){
    int (*ptr)(int,int)=&add;
    return 0;
}

//function pointer

#include<stdio.h>
int add(int a,int b){
    return a+b;
}
int main(){
    int result;
    int (*ptr)(int,int)=&add;
    ptr=&add;
    result=ptr(10,20);
    printf("%d",result);
    return 0;
}