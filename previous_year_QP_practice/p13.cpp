/* Write short notes on exception specification. Construct a program to create a function which may raise only integer and float type exceptions.*/

#include<iostream>
using namespace std;

void add() throw (int ,float)
{
    int a,b;
    float c,d;
    cout<<"enter interger to add from range 1 to 100"<<endl;
    cin>>a>>b;
    cout<<"enter float to add from range 1.0 to 100.0"<<endl;
    cin>>c>>d;

    try  
    {
        if(a==0||b==0)
        {
            throw a;
        }
        else if(c<1.0||d<100.0)
        {
            throw c;
        }
       
    }
   
    

    

}
int main()
{

    add();
    add();

    catch(int)
    {
        cout<<"exception caught for int ";
    }
    catch(float)
    {
        cout<<"exception caught for float";
    }

 return 0;
}