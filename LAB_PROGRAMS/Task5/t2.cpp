#include<iostream>
#include<vector>
using namespace std;

void findMMM(const int *p,const int& n,double& mean,double& median,int& mode)
{
    //finding mean
     mean=0.0;
    for(int i=0;i<n;i++)
    {
        mean=mean+p[i];   
    }
    mean=mean/n;

    vector<int> v(p,p+n);
    sort(v.begin(),v.end());

  //finding median
   