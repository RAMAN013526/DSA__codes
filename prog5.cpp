#include<iostream>
using namespace std;
void validateArray(int arr[],int size)
{
    int sum = 0;
    for(int i=0;i<size;i++)
    {
        sum = sum + arr[i];
    }
    cout<<sum<<endl;
}
int main()
{
    int ar[5]={2,4,6,1,8};
    int n= sizeof(ar)/sizeof(ar[0]);
    validateArray(ar,n);
}
