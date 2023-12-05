/* Write a program to count The number of alphabets ,digits,words,and lines in a file */

#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
#include<cctype>
using namespace std;

int main()
{
    ofstream writedata("file1.txt");
    if(writedata.is_open())
    {
    writedata<<"hello worl12 3 4 4 5 "<<endl;
     writedata.close();
    }


    ifstream give("file1.txt");

    string line,word;
    int al=0,wc=0,di=0,lc=0;
    if(give.is_open())
    {
        while(getline(give,line))
        {
            lc++;

            stringstream ss(line);
            {
               while(ss>>word)
               {
                wc++;
                
                for(int i=0;i<word.length();i++)
                {
                   if(isalpha(word[i]))
                   {
                    al++;

                   }
                   else if( isdigit(word[i]))
                   {
                     di++;
                   }
                }
                
               }
            }
            
           
        }

    }


    cout<<"no of words"<<wc<<endl;
    cout<<"no of lines"<<lc<<endl;
    cout<<"no of albhabets"<<al<<endl;
    cout<<"no of digits"<<di<<endl;
    
    



}