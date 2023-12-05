/* Develop a program to accept marks of a student. If the user enters the marks less than 0 and greater than 100, raise a user defined exception “Out of Range Exception”. */

#include<iostream>
using namespace std;

int main()
{
   
   try{
    int marks[10],i;
    for( i=1;i<=10;i++)
    {
        cout<<"enter marks of subject "<<i<<":"<<endl;
        cin>>marks[i];

        if(marks[i]<0 || marks[i]>100)
        throw marks[i];


    }
   }
    catch(int )
    {
        cout<<"user defined exception(marks enteres is out of range) marks entered may be less than 0 or greater than 100";
    }    
    
}