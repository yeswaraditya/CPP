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
        v.push_back(15);
        v.push_back(23);
        v.push_back(30);
        v.push_back(10);
     


    sort(v.begin(),v.end());

    cout<<"after sort in ascen\n";
    print(v);

    cout<<"after sort in desen\n";
    sort(v.begin(),v.end(),greater<int>());
    print(v);







    
}