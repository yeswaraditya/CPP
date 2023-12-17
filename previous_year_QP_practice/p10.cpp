/* Develop a program to copy the contents of one file to another*/



#include<iostream>
#include<fstream>
#include<string>

using namespace std;


int main()
{
    ifstream read("sample1.txt");//open file in read mode
    ofstream write("sample2.txt");//open file in write  mode


    string s;
    if (read.is_open() && write.is_open())
    {
        while(getline(read,s))
        {
            write<<s;
        }
    }

    write.close();
    read.close();

    
     




 return 0;
}