// maps withs list

#include<iostream>
#include<map>
#include<list>
#include<string>
using namespace std;
class Student
{
    public:
    string name;
    int roll;
    double sgpa;
    double cgpa;
};

int main()
{
    map<int,list<Student>> map;
    string name;int roll;
    
    double sgpa,cgpa;

    cout<<"enter student details"<<endl;

    for(int i=0;i<2;i++)
    {
        cin>>name>>roll>>sgpa>>cgpa;
        map[roll].push_back({name,sgpa,cgpa});

    }

    for(const auto& pair:map)
    {
        
        cout<<pair.first<<endl;
        for(const auto& student:pair.second)
        {
            cout<<student.name<<" "<<student.sgpa<<" "<<student.cgpa<<" "<<endl;
        }

    }




    

}