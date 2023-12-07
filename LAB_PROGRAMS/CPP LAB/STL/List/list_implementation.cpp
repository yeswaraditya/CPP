#include<iostream>
#include<list>
using namespace std;


void print(list<int> l)
{
    list<int>:: iterator it;

    for(it=l.begin();it != l.end();it++)
    {
        cout<< *it <<"\t";
    }
}

int main()
{
    list<int> l;

    for(int i=1;i<=10;i++)
    {
        l.push_back(i);
    }

    print(l);

    l.push_front(20);
    print(l);

    l.pop_back();
    print(l);

    l.pop_back();
    print(l);

// first values
cout<<"the first element is "<<l.front();
cout<<"the last element is "<<l.back();
cout<<"the size of list is "<<l.size();

// insertion and erase operations

list<int> ::iterator i;

i=l.begin();

advance(i,2);
l.insert(i,44);


print(l);

l.insert(l.begin(),501);
l.insert(l.begin(),501);
print(l);

//erase

l.erase(l.begin(),l.end()); //removes all the elements




    
}