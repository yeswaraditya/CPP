/* Create two classes named Mammals and Marine Animals.Create another class named BlueWhale which inherits both the above classes.
Now, create a function in each of these cases which prints “I am Mammal”, “I am a Marine animal” and “ I belong to both the categories:Mammals as well as Marine Animals” respectively.Now,Create an object for each of the above class and try calling
1.function of Mammals by the object of Mammal
2.fuction of MarineAnimal by the object of Mammal
3.function of BlueWhale by the object of BlueWhale
4.function of each of its parent by the object of BlueWhale */

#include<iostream>
using namespace std;
class mamals
{ public:
   
   void display()
   {
    cout<<"i am mamals";
   }
};
class marine
{
    public:
   void marinedisplay()
   {
    cout<<"i am marine animal";
   }

};
class bluewhale:public mamals,public marine
{
    public:

    void bluewhaledisplay() 
    {
        cout<<"I belong to both the categories Mammals as well as Marine Animals";
    }
   
};
int main()
{
    mamals mam;
    marine mar;
    bluewhale blue;

    mam.display();
    mar.marinedisplay();
    blue.bluewhaledisplay();

    blue.display();
    blue.marinedisplay();

}