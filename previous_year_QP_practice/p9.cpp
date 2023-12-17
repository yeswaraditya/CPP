/* Differentiate virtual function and pure virtual function. Illustrate with an example.*/


//virtual function

#include<iostream>
using namespace std;
class First
{
    public:

    virtual void display()
    {
        cout<<"i am function of base class"<<endl;
    }
};

class Second:public First
{
    public:
    void display()
    {
        cout<<"i am function of derived class"<<endl;
    }
};
int main()
{
    Second se;
    se.display();
 return 0;
}

