#include<iostream>
using namespace std;
class Employee
{
public:
    int empId;
    string name;
    int salary;
    Employee()
    {
       cout<<"Employee class default constructor"<<endl<<endl;
    }
    Employee(int id,string n,int s)
    {
     empId = id;
     name = n;
     salary = s;
    }
    void print()
    {
        cout<<"Employee Id"<<"\t"<<empId<<endl;
        cout<<"Employee Name"<<"\t"<<name<<endl;
        cout<<"Employee Salary"<<"\t"<<salary<<endl<<endl;
    }
};
class Node
{
public:
    Employee obj;
    Node *next;
};
int main()
{
    //creating object

    Employee e1(111,"Amit Kumar",34000);
    Employee e2(222,"Rohan Singh",44000);
    Employee e3(333,"Rohit Kumar",54000);

    //creating node

    Node *n1 = new Node();
    n1->obj = e1;
    n1->next = NULL;

    Node *n2 = new Node();
    n2->obj = e2;
    n2->next = n2;

    //pointing reference to next node

    n1->next = n2;

    Node *n3 = new Node();
    n3->obj = e3;
    n3->next = NULL;

    n2->next = n3;

    Node *current = new Node();
    current = n1;
    while(current != NULL)
    {
        current->obj.print();
        current = current->next;
    }
}
