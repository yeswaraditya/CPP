/* Write a program to declare a class with private data members.
Accept data through constructor and display the data with destructor.*/

#include<iostream>
using namespace std;

class student
{
    private:
    string name,fathername;

    public:
     student()
     {
        cout<<"enter name and father name";
        cin>>name>>fathername;
     }

    ~student()
    {
        cout<<"name:"<<name<<endl<<"fathername:"<<fathername;
    }   
  
};

int main()
{
    student s;
}