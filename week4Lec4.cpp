#include <iostream>
using namespace std;

void selectionSort(int arr[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        int minIndex=i;
        for(int j=i+1; j<n; j++)
        {
            if(arr[j]<arr[minIndex])
                minIndex=j;
        }
        swap(arr[i],arr[minIndex]);
    }
}

int bubbleSort(int *arr, int n)
{
    for(int round=1; round<n; round++)
    {
        for(int j=0; j<n-round)
        {
            if(arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);
        }
    }
}

int main()
{
    int arr[5] = {5,4,3,2,1};
    int size=5;
    selectionSort(arr,size);

    
    
    return 0;
}