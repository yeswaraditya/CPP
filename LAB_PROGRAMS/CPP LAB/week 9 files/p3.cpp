#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;
int main()
{
    int linecount = 0;
    int wordcount = 0;
    string word;
    string s;
    ifstream read("sample.txt");
    while (getline(read, s))
    {
        linecount++;
        stringstream ss(s);
        while (ss >> word)
        {
            wordcount++;
            
        }
    }

    cout << "wordcount" << wordcount << "\n";
    cout << "linecount" << linecount;
}