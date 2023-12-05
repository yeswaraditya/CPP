/* Construct a class side with data member length and member functions read and display.
Create another class square inherits from the side with member function area to find the area of the square.
Create another class cube inherits from side with member function volume to find the volume of cube.*/

#include<iostream>
using namespace std;

class side
{
    public:
    int length;

    void read()
    {
        cout<<"enter length";
        cin>>length;
    }
    void display()
    {
        cout<<"length is:"<<length<<endl;
        
    }
};
class square:public side
{
    public:
    void area()
    {
        read();
        display();
        cout<<"area of sq is:"<<length*length<<endl;
    }

};
class cube:public side
{
    public:
    void volume()
    {
        read();
        display();
        cout<<"volume of cube is:"<<length*length*length<<endl;
    }

};
int main()
{
    square s;
    s.area();
    
    cube c;
    c.volume();
}
