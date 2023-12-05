/* Write a program to catch multiple exceptions in c++.*/

#include<iostream>
using namespace std;

void check(int a)
{
    try{

        if(a==0)
        {
            
            throw a;
        }

        else if(a>0)
        {

         throw a;

        }
        else if(a<0)
         throw a;
    }
    catch(...)
    {
        cout<<"exception caught"<<endl;
    }
}
int main()
{
    check(0);
    check(1);
    check(-1);
}