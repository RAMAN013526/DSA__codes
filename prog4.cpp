#include<iostream>
using namespace std;
int main()
{
    double a = 10;
    void *ptr;  //wild pointer
    cout<<sizeof(ptr)<<endl;
    ptr = &a;  //normal pointer
    cout<<ptr<<endl;
    cout<<ptr<<endl;

    ptr=NULL;  //null pointer

    //cout<<*ptr<<endl;  //invalid pointer

    double b = 10;
    ptr = &b;
    cout<<ptr<<endl;

   // delete ptr;

    cout<<ptr<<endl;  //dangling pointer


}
