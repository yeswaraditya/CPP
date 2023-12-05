/* Declare a class of vehicle.Derived classes are two-wheelers, three-wheelers, and four-wheelers.
Display the properties of each type of vehicle using the member function of classes.*/

#include<iostream>
using namespace std;

class vehicle
{ public:
  void display()
  {
    cout<<"i am vehicle class"<<endl;
  }

};
class twowheeler:public vehicle
{
    public:
    void display()
    {
        cout<<"i am two wheeler "<<endl;
    }
    
};
class threewheeler:public vehicle
{
    public:
    void display()
    {
        cout<<"i am three wheeler"<<endl;
    }

};
class fourwheeler:public vehicle
{
     public:
    void display()
    {
        cout<<"i am four wheeler"<<endl;
    }

};
int main()
{
    fourwheeler f;
    f.display();
    threewheeler th;
    th.display();
    twowheeler to;
    to.display();
    
}