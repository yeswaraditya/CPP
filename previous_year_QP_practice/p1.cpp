/* Write a
program to show the concept of making the
outside member function as inline.*/

#include<iostream>
using namespace std;

class Sample
{
    public:
     inline void display();
};

 inline void Sample :: display()
 {
    cout<<"i am inline function"<<endl;
 }

int main()
{
    Sample s;
     s.display();

}