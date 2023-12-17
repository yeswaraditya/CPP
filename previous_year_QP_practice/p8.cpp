/* Construct a class side with data member length and member functions read and display.
Create another class square inherits from side with member function area to find the area of square.
Create another class cube inherits from side with member function volume to find the volume of cube.*/

#include<iostream>
using namespace std;

class Side
{
    protected:
    float length;


    public:

    void read()
    {
        cout<<"enter length of the side"<<endl;
        cin>>length;
        
    }
    void display()
    {
      cout<<"length: "<<length;
    }
};

class Square: public Side
{
   public:
  

   float area()
   {
    length=length*length;
     return length;
      

   }
};
class Cube: public Side
{
    public:

   float volume()
   {
        length=length*length*length;
     return length;
   }

};
int main()
{
    Square sq;
    Cube cu;

    sq.read();
    cu.read();

    sq.area();
    sq.display();

    cu.volume();
    cu.display();


 return 0;
}