#include<iostream>
using namespace std;
int partition(int arr[],int low,int high)
{
    int x,y,pivot;
    x = low - 1;
    pivot = arr[high];
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
