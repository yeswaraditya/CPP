#include<iostream>
using namespace std;

class complex
{
    private:
    int real, imag;

    public:

    void read()
    {
        cout << "Enter real and imag: ";
        cin >> real >> imag;
    }

    friend complex add(complex, complex);

    void display()
    {
        cout << real << "+" << imag << "i";
    }
};

complex add(complex c1, complex c2)
{
    complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

int main()
{
    complex c1, c2, c3;

    c1.read();
    c2.read();

    c3 = add(c1, c2);

    cout << "Sum: ";
    c3.display();

    return 0;
}
