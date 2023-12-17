// const arguments

#include<iostream>
using namespace std;

void displayValue(const int x)
{
  //  x=x+1;   this modification dont work as x is const
    cout<<"here the constant value is: "<<x<<endl;

}
int main()
{
    int a;
    cout<<"enter a number"<<endl;
    cin>>a;
   
   displayValue(a);

 return 0;
}