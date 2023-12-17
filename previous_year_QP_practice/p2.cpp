
//default arguments

#include<iostream>
using namespace std;

void sum(int &x,int y=2,string message ="this is example for default arguments")
{
    
    cout<< message<<endl;
     x=x+y;
}


int main()
{
    int x;
    cout<<"enter a number to add( second number is default argument with value 2)"<<endl;
    cin>>x;

    sum(x);

    cout<<"addition is: "<<x<<endl;


   
   return 0;
}