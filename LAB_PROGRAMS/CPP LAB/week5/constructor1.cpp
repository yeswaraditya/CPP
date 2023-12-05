/* Create a class ‘Student’ with three data members which are name, age and address.
The constructor of the class assigns default values to name as “unknown”, age as “0” and address as “not available”. 
It has two functions with the same name ‘setInfo’. 
First function has two parameters for name and age and assigns the same whereas the second function takes has three parameters which are assigned to name, age and address respectively. 
Print the name, age and address of 5 students.*/

#include<iostream>
using namespace std;

class student
{
    
    public:
    int age;
    string name,address;

    student()
    {
        name="unknown";
        age=0;
        address="not available";
    }

    void setinfo(int ag,string nam)
    { 
        age=ag;
        name=nam;
        
      
    }

    void setinfo(int ag,string nam,string adrss)
    {
         age=ag;
        name=nam;
        address=adrss;
    }

    void display()
    {
       cout<<name<<" "<<age<<" "<<address<<endl<<endl;
    }
};
int main()
{
    int k;
    student s[5];

    for(int i=0;i<5;i++)
    {
        cout<<"do you have student details";
      
    }

    if(k)
    {
        cout<<"enter name,age,address";
        cin>>s[i].name>>s[i].age>>s[i].address;
        s[i].setinfo(s[i].age,s[i].name,s[i].address);
        s[i].display();
    }
    else
    {
           cout<<"enter name,age,address";
        cin>>s[i].name>>s[i].age;
        s[i].setinfo(s[i].age,s[i].name);
        s[i].display();

    }
    
}
