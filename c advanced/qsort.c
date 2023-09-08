#include<stdio.h>
#include<stdlib.h>
int cmp(const void*a, const void*b){                     
    return *(int*)a-*(int*)b;
}

int main(){
    int arr[]={5,4,3,1,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    qsort(arr ,n , sizeof(arr[0]),cmp);
    for(int i=0;i<n;i++){
        printf("%d \n",arr[i]);
    }
    return 0;
}