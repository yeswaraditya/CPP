/* Write program using try block to detect and throw an exception if the condition ‘divide-by-zero’ occurs.*/

#include<iostream>
using namespace std;

int main()
{
    int num1,num2;
    cout<<"enter a number to divide"<<endl;
    cin>>num1;

    cout<<"enter a number to divide "<<endl;
    cin>>num2;

    try{

        if(num2==0)
        throw 0;

        else
        cout<<"result:"<<num1/num2<<endl;;
    }

    catch(int)
    {
        cout<<"exception caught while dividing with zero";

    }
}