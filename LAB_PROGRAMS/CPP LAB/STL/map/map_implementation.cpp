#include<iostream>
#include<map>
#include<string>
using namespace std;

int main()
{
        map<string,int> marks;
        marks["eswar"]=95;
        marks["aditya"]=93;
        marks["sai"]=35;


        map<string,int> :: iterator it;
        
        for ( it = marks.begin(); it != marks.end(); it++)
        {
          
            cout << it->first << it->second<<"\n"<<endl;
        }
        
  cout<<"is the map empty ,if 0 not empty: "<<marks.empty()<<endl;

//marks.clear();
//  cout<<"is the map empty ,if 1 it is  empty: "<<marks.empty()<<endl;


if(marks.find("eswar")!=marks.end())
{
  cout.flush();
  cout<<"95 is present"<<endl;
}

 
}