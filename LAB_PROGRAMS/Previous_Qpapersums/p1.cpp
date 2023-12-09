/* Write a C++ program to define three overloaded
functions to swap two integers, swap two floats and to
swap two doubles.  */

#include<iostream>
using namespace std;

void swap(int &a,int &b)
{
    int t=a;
    a=b;
    b=t;
    
}
void swap(float &a,float &b)
{
    float t=a;
    a=b;
    b=t;
    
}
void swap(double &a,double &b)
{
    double t=a;
    a=b;
    b=t;
    
}

int main()
{
    int a=4,b=5;
    swap(a,b);
    cout << "After swapping integers: " << a << ", " << b << endl;

    float c=4.4,d=5.5;
    swap(c,d);
    cout << "After swapping float: " << c << ", " << d << endl;

    double e=4.4345435,f=5.5234;
    swap(e,f);
    cout << "After swapping double: " << e << ", " << f << endl;
}