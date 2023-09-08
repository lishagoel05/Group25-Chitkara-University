/* enums - user defined used to assign names to integral constants
it can be declared in local scope 
enum names are automatically initialized by the compiler*/
#include<stdio.h>
// int main(){
//     enum bool{true,false}var;
//     var=true;
//     printf("%d",var);
//     return 0;
// }

//two or more names can have same value
//only integral values are allowed

// int main(){
//     enum point{x=0,y=0,z=0};
//     printf("%d %d %d",x,y,z);
//     return 0;
// }

//we can assign values in any order
//all unassigned names will get a value of pevious value +1

// int main(){
//     enum point{x=2,y=24,z};
//     printf("%d %d %d",x,y,z);
//     return 0;
// }

//all enum constant must be unique in their scope

int main(){
    enum point{x=0,y=0,z=0};
    enum point{x=7,t=56,p=102};
    printf("%d %d %d",x,y,z,t,p);
    return 0;
}