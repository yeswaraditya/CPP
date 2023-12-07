#include<iostream>
#include<vector>
using namespace std;


class Student
{
    public:
    string name;
    int roll;
    int marks;

    Student(string name,int roll,int marks)
    {
        this->roll =roll;
        this->name =name;
        this->marks =marks;
    }

};

void print(vector<Student> v)
{
    int n=v.size();
    for(int i=0;i<n;i++)
    {
        cout<<v[i].roll<<"\n " <<v[i].name<<"\n"<<v[i].marks<<"\n";
    }
}

bool compare(Student a1,Student a2) // compare is name of my comperator
{
   if(a1.marks>a2.marks)
   {
     return 1;
   }
   else if (a1.marks<a2.marks)
   {
     return 0;
   }

   else
   {
     if(a1.roll<a2.roll)
     {
        return 1;
     }
     else{
        return 0;
     }
   }

   
}

int main()
{
    vector<Student> student_list;

    Student ob1("eswar", 12, 78);
    Student ob2("john", 13, 85);
    Student ob3("alice", 14, 92);
    Student ob4("bob", 15, 88);
    Student ob5("emma", 16, 95);


    student_list.push_back(ob1);
    student_list.push_back(ob2);
    student_list.push_back(ob3);
    student_list.push_back(ob4);
    student_list.push_back(ob5);


    sort(student_list.begin(),student_list.end(),compare);

     print(student_list);




    
}