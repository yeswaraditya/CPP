#include<iostream>
using namespace std;

class Shape
{
    public:

    virtual double area()=0;
};
class Triangle: public Shape
{
    public:

    double area(double breadth,double height)
    {
        return 0.5*breadth*height;
        
    }

};
class Parallelogram: public Shape
{
    public:
    double area(double breadth,double height)
    {
        return breadth*height;
        
    }

};
class Circle: public Shape
{
    public:
     double area(double radius)
    {
        return 3.14*radius*radius;
        
    }

};

int main()
{
    Shape *s=new Triangle(10.0,20.0);
    cout<<"area of triangle ="<<s->area()<<endl;
    s=new Parallelogram(15.0,25.5);
    cout<<"area of parallelogram="<<s->area()<<endl;
    
    s=new Circle(3.5);
    cout<<"area of circle="<<s->area()<<endl;

    return 0;
}