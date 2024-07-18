#include<iostream>
using namespace std;
int main()
{
    int a=20;
    int **ptr1;
    int *ptr;

    ptr = &a;
    ptr1 = &ptr;

    cout<<ptr1<<endl;  //address of ptr
    cout<<*ptr1<<endl; //address of a
    cout<<**ptr1<<endl; //20
}
