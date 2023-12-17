/* Differentiate virtual function and pure virtual function. Illustrate with an example.*/


/* Differentiate virtual function and pure virtual function. Illustrate with an example.*/


//virtual function

#include<iostream>
using namespace std;
class First
{
    public:

    virtual void display()=0;
   
    
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

