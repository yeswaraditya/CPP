/* Construct a class complex with data members real and imaginary.
 The member functions are read and display.
  Create a non member function sum to add two complex numbers.
   Show that function sum can access the private members of complex using friend concept.*/

#include<iostream>
using namespace std;

class Complex
{
    private:
    double real,imaginary;

    public:
    void read()
    {
        cout<<"enter real part"<<endl;
        cin>>real;
        cout<<"enter  imaginary"<<endl;
        cin>>imaginary;
    }

    friend Complex sum(Complex& num1 ,Complex& num2);
    
    void display()
    {
        cout<<"complex number sum is:"<<real<<"+"<<imaginary<<"i\n";
        cin>>real>>imaginary;
    }
};
  Complex sum(Complex& num1 ,Complex& num2)
    {
        Complex result;
        result.real=num1.real+num2.real;
        result.imaginary=num1.imaginary+num2.imaginary;

        return result;
        
    }

int main()
{
    Complex c1,c2,result;

    cout<<"enter data for first  complex numbers"<<endl;
    c1.read();

    cout<<"enter data for second complex number"<<endl;
    c1.read();

    result= sum(c1,c2);
    cout<<"result of the sum:\n";
    result.display();

 return 0;
}