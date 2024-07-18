#include<iostream>
using namespace std;
int main()
{
    int a = 10;
    int *ptr;  //wild pointer
    cout<<sizeof(ptr)<<endl;
    ptr = &a;  //normal pointer
    cout<<ptr<<endl;
    cout<<*ptr<<endl;

    ptr=NULL;  //null pointer

    //cout<<*ptr<<endl;  //invalid pointer

    int b = 10;
    ptr = &b;
    cout<<*ptr<<endl;

    delete ptr;

    cout<<*ptr<<endl;  //dangling pointer


}
