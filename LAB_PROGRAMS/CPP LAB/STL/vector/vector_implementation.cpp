#include<iostream>
#include<vector>
using namespace std;



void print_vector( vector<int> sample)
{

 for (int i = 1; i <=sample.size(); i++)
    {
        cout<<sample[i];
    }
}

int main()
{
    vector<int> v;
 
    cout<<"size of the vector"<<v.size()<<endl;



   // vector<int> v1{4,44,24,45,44,4};
   // cout<<"size of the vector"<<v1.size()<<endl;
    //output is size of vector is 6


// insert values into vector
    vector<int> sample;

    for (int i = 1; i <=10; i++)
    {
        sample.push_back(i);
    }

    print_vector(sample);
    
cout<<"first element in vector\n"<<sample.front();
cout<<"\nlast element in vector"<<sample.back();

cout<<"vector is empty or not\n"<<sample.empty();


sample.pop_back();

   

cout<<"first value through iterators"<<*sample.begin();
cout<<"fifth value through iterators"<<*(sample.begin()+4)<<endl;


//iterator

vector<int>:: iterator it ;

   for(it=sample.begin();it!=sample.end();it++)
   {
      cout<<*it<<endl;
   }


 sample.insert(sample.begin()+5,35);

 sample.erase(sample.begin()+3);//delete position at index 2
 sample.erase(sample.begin(),sample.begin()+3);//deletes from 0 index to 2 index

 



}