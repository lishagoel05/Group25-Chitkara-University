//incresing order bubble sort
#include<stdio.h>
#include<stdbool.h>
bool inc(int a, int b){return a>b;}
bool dec(int a, int b){return a<b;}
void bubble_sort(int arr[],int n, bool(*cmp)(int,int)){
    for (int i = 0; i < n-1; i++)
        for(int j=0;j=n-i-1;j++)
            if(cmp(arr[j],arr[j+1]))
                arr[j]=arr[j]+arr[j+1]-(arr[j+1]=arr[j]);
    
}
int main(){
    int arr[]={5,3,2,4,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr,n,&inc);
    for(int i=0 ;i<n;i++) printf("%d",arr[i]);
    printf("\n");
    return 0;
}


//decreasing order bubble sort
/*#include<stdio.h>
#include<stdbool.h>
bool inc(int a, int b){return a>b;}
bool dec(int a, int b){return a<b;}
void bubble_sort(int arr[],int n, bool(*cmp)(int,int)){
    for ( i = 0; i < n-1; i++)
        for(int j=0;j=n-i-1;j++)
            if(cmp(arr[j],arr[j+1]))
                arr[j]=arr[j]+arr[j+1]-(arr[j+1]=arr[j]);
    
}
int main(){
    int arr[]={5,3,2,4,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr,n,&dec);
    for(int=0;i<n;i++) printf("%d",arr[i]);
    printf("\n");
    return 0;
}*/