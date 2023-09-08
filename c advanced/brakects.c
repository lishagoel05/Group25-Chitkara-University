#include<stdio.h>
int size(stack *s){
    return s->top;
}
int main(){
    char arr[]="{ }[( )]";
    if (balanced(arr)) printf("yes \n");
    else printf("no\n");
    return 0;
}