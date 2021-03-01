#include<stdio.h>

void insertionSort(int arr[],int n){
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i-1;
        while (j>=0 && arr[j]>key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        
        arr[j+1] = key;
    }
    
}

void printArray(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
}

int main(){
    int i,j;
    int arr[] = {5,7,2,1,6,3};
    int n = 6;
    insertionSort(arr,n);
    printArray(arr,n);
    return 0;

}