#include<stdio.h>


// void swap(int *a,int *b){
//     int temp;
//     temp = *a;
//     *a = *b;
//     *b = temp;
// }

int partition(int arr[],int low,int high){
    int temp;
    int key = arr[low];
    int i = low +1;
    int j = high;
    do
    {
        while (arr[i]<key);
        {
            i++;
        }
        while (arr[j]>=key)
        {
            j--;
        }
        if (i<j)
        {
            // swap(&arr[i],&arr[j]);
            temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
        }
    }while (i<j);
    
    // swap(&arr[low],&arr[j]);
     temp = arr[j];
    arr[j] = arr[low];
    arr[low] = temp;
    return j;
}

void quickSort(int arr[],int low,int high){
    int index;
    if (low<high)
    {
        index=partition(arr,low,high);
        quickSort(arr,low,index-1);
        quickSort(arr,index+1,high);
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
    quickSort(arr,0,n-1);
    printArray(arr,n);
    return 0;

}