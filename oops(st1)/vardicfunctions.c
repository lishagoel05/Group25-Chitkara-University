#include<stdio.h>
#include<stdarg.h>

int addnum(int n,...){
    int sum=0;
    va_list ptr;
    va_start (ptr,n);
    for(int i=0;i<n;i++){
        sum+=va_arg(ptr,int);
    }
    va_end(ptr);
    return sum;
}
int main(){
    printf("the sum is : %d \n",addnum(3,5,3,9));
    return 0;
}

// #include <stdarg.h>
// #include <stdio.h>
 
// // Variadic function to add numbers
// int AddNumbers(int n, ...)
// {
//     int Sum = 0;
 
//     // Declaring pointer to the
//     // argument list
//     va_list ptr;
 
//     // Initializing argument to the
//     // list pointer
//     va_start(ptr, n);
 
//     for (int i = 0; i < n; i++)
 
//         // Accessing current variable
//         // and pointing to next one
//         Sum += va_arg(ptr, int);
 
//     // Ending argument list traversal
//     va_end(ptr);
 
//     return Sum;
// }
 
// // Driver Code
// int main()
// {
//     printf("\n\n Variadic functions: \n");
 
//     // Variable number of arguments
//     printf("\n 1 + 2 = %d ",
//            AddNumbers(2, 1, 2));
 
//     printf("\n 3 + 4 + 5 = %d ",
//            AddNumbers(3, 3, 4, 5));
 
//     printf("\n 6 + 7 + 8 + 9 = %d ",
//            AddNumbers(4, 6, 7, 8, 9));
 
//     printf("\n");
 
//     return 0;
// }