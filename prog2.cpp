#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;  //10
    int *ptr;
    ptr = &n;
    cout<<ptr<<endl; //address of n
    cout<<*ptr<<endl; //value of n 10

    *ptr = *ptr  + 5;
    cout<<n<<endl;  //15

    int n1 = 20;
    ptr = &n1;
    cout<<ptr<<endl;  //addess of n1

    ptr = NULL;
}
