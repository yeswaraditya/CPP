/* Develop a program to insert an element into the vector object. Use member function and iterator to traverse.*/
#include<iostream>
#include<vector>
using namespace std;

int main()
{
   vector<int> v;
   v.push_back(20);
   v.push_back(23);
   v.push_back(2);
   v.push_back(50);

   for(auto element:v)
   {
    cout<<element<<endl;
   }
}
