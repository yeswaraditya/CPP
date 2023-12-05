/* Write a program to print the area of two rectangles having sides (4,5) and (5,8) respectively by creating a class named ‘Rectangle’ with a function named ‘Area’ which returns the area.
 Length and breadth are passed as parameters to its constructor.*/

 #include<iostream>
 using namespace std;

 class rectangle
 { private:
   int length,breadth;

   public:
    rectangle()
    {
        cout<<"enter length and breadth";
        cin>>length>>breadth;
    }
    int area()
    {
        return length*breadth;
       
    }
 };
 int main()
 {
    rectangle r1,r2;
    int result1=0,result2=0;
   result1= r1.area();
    result2=r2.area();

    cout<<"area of rectangle 1:"<<result1;
    cout<<"area of rectangle 2:"<<result2;
 }