// write a program to copy cntents of file ti another files

#include<iostream>
#include<fstream>
using namespace std;
int main()
{  string s;
  ifstream read("sample.txt");
  {  while(!read.eof())
    {
     read>>s;
    }
  }   

  ofstream write("sample1.txt");
  {

        write<<s;
        cout<<s;
     
  }
  
}