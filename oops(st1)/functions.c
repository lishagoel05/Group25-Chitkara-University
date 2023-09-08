#include<stdio.h>
struct student{
    int roll;
    int score;
};

void print_details(struct student st){
    printf("%d %d\n",st.roll,st.score);
}


int main(){

    struct student st1={542,94};
    struct student st2={898,74};

    print_details(st1);
    print_details(st2);

    return 0;
}