#include<stdio.h>


void swap(int *a,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-1-i; j++)
        {
            if (arr[j+1]<arr[j])
            {
                swap(&arr[j+1],&arr[j]);
            }
        }
        
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
    bubbleSort(arr,n);
    printArray(arr,n);
    return 0;

}