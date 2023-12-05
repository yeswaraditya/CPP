/* Create a generic function SORT that sorts an array of elements of generic type. Then test function by calling with char, int, float type */

#include<iostream>
#include<algorithm>
using namespace std;

template<typename t>
void  sort(t  a[], int n)
{
    sort(a,a+n);
    cout<<"elements after sort are"<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<"\t";

    }
    cout<<"\n";


}
int main()
{
   int n;
   int a[]={234,234,324,234423,4234,34,234,234,23,4};
   n=sizeof(a)/sizeof(a[0]);
   sort(a,n);
   double d[]={234.4,34.3,34.34,234234.34,234.234};
   n=sizeof(d)/sizeof(d[0]);
   sort(d,n);
 
   char c[]={'d','f','h','h'};
   n=sizeof(c)/sizeof(c[0]);
   sort(c,n);
   

}
