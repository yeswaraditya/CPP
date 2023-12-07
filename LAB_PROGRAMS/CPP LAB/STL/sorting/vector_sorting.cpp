#include<iostream>
#include<vector>
using namespace std;
template < class t>


void print(vector<t> v)
{
    for(auto& element:v)
    {
        cout<<element<<" ";
    }
}

int main()
{
     vector<int> v;


        v.push_back(20);
      