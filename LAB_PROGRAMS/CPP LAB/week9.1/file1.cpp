/* Write a program to copy Contents of one file to another file */
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{


    ofstream writedata("file1.txt");
    if(writedata.is_open())
    {
    writedata<<"hello this is sample data";
    writedata.close();
    
    }
    else{
        cout<<"error while opening file";
    }


    ifstream give("file1.txt");
    ofstream take("file2.txt");
    
    string s;

    if(give.is_open() && take.is_open())
    {
        while(getline(give,s))
        {
            take<<s<<endl;
        }
        take.close();
        give.close();
        cout<<"successfully copied";

    }


}