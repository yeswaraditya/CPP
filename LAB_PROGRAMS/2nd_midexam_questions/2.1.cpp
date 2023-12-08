#include<iostream>
using namespace std;
template<class T>

T find_mean(T a[],int size)
{
    T sum=0;
     for(int i=0;i<size;i++)
     {
        sum=sum+a[i];
     }

     T mean=sum/size;

     return mean;
}



int main() {
    int a[] = {3, 2, 1, 4, 34, 21, 67, 45, 87};
    float f[] = {2.3f, 4.5f, 5.6f, 7.8f, 12.3f};
    double d[] = {3.2, 7.9, 5.8, 3.1, 13.6, 11.3};

    cout << "Mean of an integer array: " << find_mean(a, 9) << endl;
    cout << "Mean of a float array: " << find_mean(f, 5) << endl;
    cout << "Mean of a double array: " << find_mean(d, 6) << endl;

    return 0;
}