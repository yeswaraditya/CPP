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
    if(n%2==0)
    {
        // If the number of elements is even, calculate the average of the two middle elements
        median=(v[n/2]+v[n/2-1])/2.0;
    }
    else{
         // If the number of elements is odd, take the middle element as the median
        median=v[n/2];
    }

    //finding mode
    int currentnumber;
    int frequency;
    mode=v[0];
    

    for(int i=0;i<n;i++)
    {
        
        
            if(v[i]==v[i+1])
            {
                currentnumber++;
            }
            else{
               if(currentnumber>frequency)
               {
                frequency=currentnumber;
                mode=v[i];
               }
            }
        
        currentnumber=1;
    }

    if(currentnumber>frequency)
    {
        mode=v[n-1];
    }
    




}
int main()
{
    int n;
    cout<<"enter size of array\n";
    cin>>n;

    int* p=new int[n];

    for(int i=0;i<n;i++)
    {
      cout<<"enter elements\n";
      cin>>p[i];
    }
    
    double mean,median;
    int mode;

    findMMM(p,n,mean,median,mode);

    cout<<"Mean="<<mean<<endl;
    cout<<"Meadian="<<median<<endl;
    cout<<"Mode="<<mode<<endl;
}