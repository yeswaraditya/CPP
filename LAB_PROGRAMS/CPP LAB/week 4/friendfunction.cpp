// write a program to demonstrate friend function


#include<iostream>
using namespace std;
class student
{
    private:
    int roll;
    string name;

    public:

    void read()
    {   cout<<"enter roll and name";
        cin>>roll>>name;
    }

    friend void display(student);
};
void display(student s2)
{
   cout<<s2.roll<<s2.name;
}
int main()
{
    student s1;
    s1.read();
    display(s1);
}