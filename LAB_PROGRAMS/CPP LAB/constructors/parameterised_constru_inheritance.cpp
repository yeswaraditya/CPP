#include<iostream>
using namespace std;

class Parent
{
    private:
    int x;
    public:
     Parent(int x)
     {
        this->x=x;
        cout<<"this is parent class\n";
     }

     void print()
     {
        cout<<"variable in parent\n"<<x;

     }

};
class Child