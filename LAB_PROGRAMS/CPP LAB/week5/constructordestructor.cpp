/* Create a class named ‘Programming’. While creating an object of the class, if nothing is passed to it, then the message “I love
programming languages” should be printed. If some String is passed to it, then in place of “programming languages” the name of that String variable should be printed.
For example, while creating the object if we pass “cpp”, then “I love cpp” should be printed.*/


#include<iostream>
using namespace std;

class programming
{
    private:
    string s;

    public:
    programming()
    {  s=" i love programming languages ";
        cout<<s<<endl;
    }

    programming(string s1)
    {
        s=" i love  ";
        cout<<s+s1<<endl;

    }
};
int main()
{
    int k;
    string input;
    cout<<"do you want to enter string";
    cin>>k;

    if(k)
    { 
        cout<<"enter the string";
        cin>>input;
    }
    if(input.size())
    {
      programming p(input);

    }
    else
    programming p;
}