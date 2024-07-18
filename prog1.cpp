#include<iostream>
using namespace std;
int main()
{
    int arr[2][2][2];
    cout<<"Enter array element"<<endl;
    for(int k=0;k<2;k++)
{
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>arr[k][i][j];
            if(arr[k][i][j]%2==0)
            {
                arr[k][i][j]=0;
            }
            else
            {
                arr[k][i][j]=1;
            }
        }
    }
}
   for(int k =0;k<2;k++)
{
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<arr[k][i][j]<<" ";
        }
            cout<<endl;
    }
    cout<<endl;
}
}
