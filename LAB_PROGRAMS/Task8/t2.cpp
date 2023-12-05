#include<iostream>
using namespace std;

class Complex
{
    private:
    int real,imag;
}

int main()
{
    complex c1(2.1,3.4),c2(4.3,5.1);
complex ac=c1+c2;
complex sc=c1-c2;
complex mc=c1*c2;
cout<<"complex number 1: "<<c1<<endl;
cout<<"complex number 2: "<<c2<<endl;
cout<<"addition of complex number 1 and 2 : "<<ac<<endl;
cout<<"subtraction of complex number 1 and 2 : "<<sc<<endl;
cout<<"multiplication of complex number 1 and 2 : "<<mc<<endl;
}