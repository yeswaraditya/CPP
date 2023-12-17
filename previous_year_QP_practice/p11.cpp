/* Prepare a user defined exception to catch an exception when the age is less than 18 and display “You are not eligible for voting” otherwise print “Welcome to caste the vote”.*/

#include<iostream>
using namespace std;
int main()
{
    int age;
   cout<<"welcome to vote booth enter your age"<<endl;
    cin>>age;
   try
   {
      if (age<=18)
      {
        throw age;
      }
      else
      {
        cout<<" you are eligible to cast vote";
      }
   }
   catch(int)
   {
     cout<<"not eligible to vote";
   }
   




 return 0;
}