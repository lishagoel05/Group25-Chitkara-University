// #include<stdio.h>
// #include<stdlib.h>

// int cmpfunc(const void*a, const void*b){
//     return *(int*)a-*(int*)b;
// }

// int main(){
//     int n;
//     int arr[50];
//     printf("enter the no of elements in an array: \n");
//     scanf("%d\n",&n);
//     printf("enter the elements of array: \n");
//     for(int i=0;i<n;i++){
//         scanf("%d\n",&arr[i]);
//     }
//     int x=sizeof(arr)/sizeof(arr[0]);
//     qsort(arr,x,sizeof(arr[0]),cmpfunc);
//     for(int i=0;i<x;i++){
//         printf("%d \t",arr[i]);
//     }
//     return 0;
// }

#include<stdio.h>  
#include<stdlib.h>  
int compare(const void* num1, const void* num2) // comparing function  
{  
    int a = *(int*) num1;  
    int b = *(int*) num2;  
    if(a > b)  
    {  
        return 1;  
    }  
    else if(a < b)  
    {  
        return -1;  
    }  
    return 0;  
}  
int main()  
{  
    int arr[50], n, i;  
    printf("Enter the size of the array to be sorted: ");  
    scanf("%d", &n);  
    printf("\nEnter elements into the array: ");  
    for(i = 0; i < n; i++)  
    {  
        scanf("%d", &arr[i]);  
    }  
    qsort(arr, n, sizeof(int), compare);  
    printf("\nThe sorted array: ");  
    printf("\n[");  
    for(i = 0; i < n; i++)  
    {  
        if(i == n-1) // To prevent a comma(,) after the last element  
        {  
            printf("%d", arr[i]);  
            break;  
        }  
        printf("%d, ", arr[i]);  
    }  
    printf("]");  
}  