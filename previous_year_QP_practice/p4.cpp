// function overloading

#include<iostream>
using namespace std;

class Sample
{
    public:
    void add(int x,int y)
    {
        cout<<"the addition of integers is:"<<x+y<<endl;
        
    }

    void add(float x,float y)
    {
        cout<<"the addition of float is:"<<x+y<<endl;

    }
};
int main()
{
    Sample s;

    int a,b;
    float c,d;
   cout<<"enter two integers to add"<<endl;
   cin>>a>>b;

   cout<<"enter two float to add"<<endl;
   cin>>c>>d;

   s.add(a,b);
   s.add(c,d);

 return 0;
}