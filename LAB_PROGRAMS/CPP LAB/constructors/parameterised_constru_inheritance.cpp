#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
    string name;
    int age;

public:
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
class Student : public Person
{
private:
    string coursename;

public:
    Student(string name, int age, string coursename) : Person(name, age)
    {
        this->coursename = coursename;
    }
    void displayStudentDetails()
    {
        display();
        cout << "coursename: " << coursename << endl;
    }
};

int main()
{
    Person person("eswar", 19);
    person.display();

    Student s("aditya", 21, "cse course");
    s.displayStudentDetails();
}