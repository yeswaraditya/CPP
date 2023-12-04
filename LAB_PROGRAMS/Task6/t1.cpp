#include<iostream>
using namespace std;



class Student
{
    private:
    int rollno;
    string name;
    int age;
    double marks;

    public:
    Student(int roll,string nme,int ag,double mks):rollno(roll),name(nme),age(ag),marks(mks){}

    void calculateAverage()
    {
        if(age<=0)
        {
            throw "invalid number(Negative age)";
        }

        if(marks<0||marks>100)
        {
            throw "invalid range(marks should be between 0 and 100)";
        }

        //perform operations to cal average

    }

    void display()
    {
        cout<<"rollno"<<rollno<<endl;
        cout<<"Name"<<name<<endl;
        cout<<"age"<<age<<endl;
        cout<<"marks"<<marks<<endl;

    }

};

int main()
{
    try{
        Student s(12,"sai",19,94);
        s.calculateAverage();
        s.display();

    }
    catch(const char* message)
    {
        cout<<"exception"<<message<<endl;

    }
}

