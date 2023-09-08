#include<stdio.h>
#include<stdarg.h>
int add(int n,...){          // ... any number of arguments
    int ans=0;
    va_list ptr;
    va_start(ptr,n);
    for(int i=0; i<n; i++){
        ans+= va_arg(ptr,int);
    }

    va_end(ptr);
    return ans;
}
int main(){
    printf("%d\n",add(1,2));
    return 0;
}