#include<iostream>
using namespace std;

class Employee
{
  private:
  int empNo;
  string empName;
  string department;
  int age;
  double sal;

  public:
  Employee()
  {
    cout<<"enter empno:\n";
    cin>>empNo;
    cout<<"enter empname:\n";
    cin>>empName;
    cout<<"enter department:\n";
    cin>>department;
    cout<<"enter age:\n";
    cin>>age;
    cout<<"enter salary:\n";
    cin>>sal;
  }
  Employee_findMaxSalary()
  {
    
  }
  Employee_findMinSalary();

};

int main()
{
    int n;
    cout<<"enter no of employees";
    cin>>n;

    Employee e[n];
   

}