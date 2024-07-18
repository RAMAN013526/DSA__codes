#include<iostream>
using namespace std;
int partition(int arr[],int low,int high)
{
    int x,y,pivot;
    pivot = arr[high];
    x = low - 1;
    for(y = low;y <= high-1;y++)
    {
        if(arr[y]<pivot)
        {
            x++;
            swap(arr[x],arr[y]);
        }
    }
    swap(arr[x+1],pivot);
    return x+1;
}
void quickSort(int arr[],int low,int high)
{
    if(low<high)
    {
        int pos = partition(arr,low,high);
        quickSort(arr,low,pos-1);
        quickSort(arr,pos+1,high);
    }

}
