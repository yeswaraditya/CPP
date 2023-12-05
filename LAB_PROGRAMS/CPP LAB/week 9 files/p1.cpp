// write a program to write and read contents if a file

#include<iostream>
#include<fstream>
using namespace std;
int main()
{   string s;
    ofstream of("sample.txt");
     {
        of<<"hello";
        of<<"world";
        of.close();
     }

    ifstream read("sample.txt");
    {
        while(!read.eof())
        {
            read>>s;
            
        }
        read.close();
    }

    cout<<s;
}