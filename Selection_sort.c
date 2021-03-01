#include<stdio.h>


void swap(int *a,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int arr[],int n){
    for (int i = 0; i < n-1; i++)
    {
        int min = arr[i];
        int pos = i;
        for (int j = i+1; j < n; j++)
        {
            if (arr[j]<arr[min])
            {
                min= arr[j];
                pos = j;
            }
        }
        swap(&arr[i],&arr[min]);
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
    selectionSort(arr,n);
    printArray(arr,n);
    return 0;

}