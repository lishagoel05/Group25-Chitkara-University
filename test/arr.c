#include<stdio.h>
int main(){
    int n;
    printf("enter number of elements in a array: \n");
    scanf("%d",&n);
    int arr[n];
    printf("the elements in array: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("the even numbers are: \n");
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            printf("%d \t",arr[i]);
        }
    }
    // printf(" \n the odd numbers are: \n");
    for(int i=0;i<n;i++){
        if(arr[i]%2==1){
            printf("%d \t",arr[i]);
        }
    }
    return 0;
}

