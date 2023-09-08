#error error is here
int main(){
    return 0;
}

#include<stdio.h>
#define print(x) printf("%f\n",x)
#define print(x) printf("%s\n",x)
int main(){
    int a=13;
    print(a);
    return 0;
}

#include<stdio.h>
#define print(x) printf("%f \n",x)
int main(){
    int a=13;
    print(a);
    //printf("%f",a);
    return 0;
}

#include<stdio.h>
#define print(x) printf("%f \n",#x)
int main(){
    int a=13;
    //print(a);
    printf("%f \n","a");
    //printf("%f",a);
    return 0;
}