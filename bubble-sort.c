#include<stdio.h>

void bubblesort(int arr[20],int n){
    for(int turns = 0; turns < n;turns++){
        for(int j=0;j<n-1-turns;j++){
            if (arr[j] > arr[j+1]){
                //swap
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void printarr(int arr[20],int n){
    printf("sorted array is:\n");
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
}


void main(){
    int arr[20],n;
    printf("enter how many elements to insert:\n");
    scanf("%d",&n);

    printf("enter array elements:\n");
    for(int i=0;i< n;i++){
    scanf("%d",&arr[i]);
    }

bubblesort(arr,n);
printarr(arr,n);
}