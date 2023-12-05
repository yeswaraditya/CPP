/* Illustrate the concept of “Specifying Exception” with example program.*/
#include<iostream>
using namespace std;

void divide(int a,int b) throw(int) //only throws value of datatype int
{
    try{

        if(b==0)
        {
            throw b;

        }
        else
        cout<<"for second case result is:"<<a/b<<endl;


    }
    catch(int)
    {
        cout<<"exception caught and number is divied with zero"<<endl;
    }
}
int main()
{
    divide(1,0);
    divide(4,2);
}