/*#include<stdio.h>
enum days{
    mon , tues , wed ,thurs ,fri ,sat ,sun
};
int main(){
    enum days today=mon;
    printf("%d\n",today);
    printf("%d\n",sizeof(today));
    return 0;
}

#include<stdio.h>
enum days{
    mon , tues , wed ,thurs ,fri ,sat ,sun
};
int main(){
    enum days today=mon;
    printf("%d\n",wed);
    printf("%d\n",sizeof(today));
    return 0;
}

#include<stdio.h>
enum days{
    mon , tues , wed ,thurs ,fri ,sat ,sun
};
int main(){
    enum days today=sun;
    printf("%d\n",today);
    printf("%d\n",sizeof(today));
    return 0;
}*/

#include<stdio.h>
enum days{
    mon , tues=11 , wed,thurs ,fri ,sat ,sun
};
int main(){
    enum days today=wed;
    printf("%d\n",today);
    printf("%d\n",sizeof(today));
    return 0;
}