#include<iostream>
#include<cmath>
using namespace std;

bool quadEquation(double a,double b,double c,double* x1ptr,double* x2ptr)
{
    if((b*b-4*a*c)>=0)
    {
        *x1ptr=(-b+sqrt(b*b-4*a*c))/(2*a);
        *x2ptr=(-b-sqrt(b*b-4*a*c))/(2*a);
        return true;
    }
    else
    {
        cout<<"no real roots"<<endl;
        return false;
    }
}

void printQuadEquation(double a,double b,double c)
{
    double x1,x2;
    if(quadEquation(a,b,c,&x1,&x2))
    {
        cout<<"\nThe Quadratic Equation is: ";
        cout<<"("<<a<<")"<<"x^2+"<<"("<<b<<")"<<"x+"<<"("<<c<<")"<<endl;
        cout<<"the roots are\nx1="<<x1<<"x2="<<x2;
    }
}
int main()
{

printQuadEquation( 2.0, -2.0, -1.5);
printQuadEquation( 1.0, -6.0, 9.0);
printQuadEquation( 2.0, 0.0, 2.0);
return 0;
}