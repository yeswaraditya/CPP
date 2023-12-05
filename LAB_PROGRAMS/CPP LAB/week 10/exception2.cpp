/* Develop a program to accept 10 integers into an array. While entering, when a negative number is found throw an user defined exception “NegativenumberException”.	*/

#include<iostream>
using namespace std;

int main()
{
    int i,a[10];
    try{
          for(i=0;i<10;i++)
          { 
            cout<<"enter a number:"<<endl;
              cin>>a[i];
             if(a[i]<0)
             {
                throw i;
             }

              
          }

    }
    catch(int)
    {
        cout<<"negative number exception which is:"<<i<<endl;
    }
}


