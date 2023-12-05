/* Construct a class employee with data members emp no and name.Create another class typist, manager to illustrate the hierarchical inheritance. 
Read and print the details of employees using lower level class objects.*/

#include<iostream>
using namespace std;

class employee
{
    public:
    int empno;
    string name;

    employee()
    {
        cout<<"enter details employee no and employee name"<<endl;
        cin>>empno>>name;
    }

    
};
class typist:public employee
{
    public:
    void display()
    {
        cout<<"employee type typist";
        cout<<"emp no:"<<empno<<"emp name"<<name<<endl;

    }
     
};
class manager:public employee
{
    
      public:
    void display()
    {
        cout<<"employee type manager";
        cout<<"emp no:"<<empno<<"emp name"<<name<<endl;

    }
};
int main()
{
    manager m;

    m.display();

    typist t;
    t.display();
}