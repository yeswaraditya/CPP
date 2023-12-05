/* Construct a class student with data members rollno, name. 
The member functions are read and display.Construct another class marks derived from student with data members m1, m2, m3 and member functions read marks and display marks.
 Create another class result derived from marks with data member total and member function calculate to find the total and average of a student. Print all the details of the student.*/

 #include<iostream>
 using namespace std;

 class student
 {
    public:
    int roll;
    string name;

    void read()
    {
        cout<<"enter name and roll"<<endl;
        cin>>name>>roll;
    }
     void display()
    {
        cout<<"name:"<<name<<"roll no:"<<roll<<endl;
    }
 };
 class marks:public student
 {
    public:
    int m1,m2,m3;

    void mread()
    {
        cout<<"enter m1 m2 m3 marks"<<endl;
        cin>>m1>>m2>>m3;
    }
    void mdisplay()
    {
        cout<<"m1:"<<m1<<"m2:"<<m2<<"m3:"<<m3<<endl;
    }
    
 };
 
 class result:public marks
 {
    public:
    int total;
    float average;

    result()
    {
        mread();
        mdisplay();
        total=m1+m2+m3;
        average=total/3.0;
        cout<<"total:"<<total<<"average:"<<average<<endl;
    }

    
    
    
 };
 int main()
 {
    student s;
    s.read();
    s.display();

    marks m;
  
    
    result r;
 }
