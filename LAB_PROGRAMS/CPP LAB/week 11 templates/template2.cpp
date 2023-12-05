/* Create a function template to display a value that is both preceded and followed by 10 asterisks on a line. 
Write a main() function that tests the function with character ,integer, double & string arguments.*/

#include<iostream>
using namespace std;
template< typename t>

void toprint( t value)
{
    cout<<"**********"<<value<<"**********"<<endl;
}

int main()
{
    toprint('a');
    toprint(234324);
    toprint(2242.232);
    toprint("hello world");



}

