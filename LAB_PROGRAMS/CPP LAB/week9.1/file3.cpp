/* Write a Program to merge the contents of a file */
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    ifstream give1("file1.txt");
   
   
    ifstream give2("file2.txt");

    ofstream take("file3.txt");


    if(!give1.is_open() || !give2.is_open() || !take.is_open())
    {
        cout<<"error opening file";

    }

    else
    {
        string s;

        while(getline(give1,s))
        {
            take<<s<<endl;
        }

        while(getline(give2,s))
        {
            take<<s<<endl;
        }
    }
    give1.close();
    give2.close();
    take.close();

}