#include<iostream>
using namespace std;
// create bubble sort function with two arguments(array,size)
void bubbleSort(int arr[],int n)
{
    // iterate pass
    for(int i=0;i< n;i++)  // pass
    {
        cout<<"Pass :"<<i+1<<" "<<endl;
        for(int j=0;j<n-i-1;j++)
        {
          if(arr[j]>arr[j+1])
          {
              swap(arr[j],arr[j+1]);
          }
        }
    }
}
void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}
int main()
{
    int arr[5]={3,1,7,2,7};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"before call bubble sort"<<endl;
    print(arr,size);
    bubbleSort(arr,size);
    cout<<"After bubble sort"<<endl;
    print(arr,size);
}
