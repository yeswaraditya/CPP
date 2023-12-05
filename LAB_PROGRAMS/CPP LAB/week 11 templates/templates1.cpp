/* Create a function template named circleArea().
The function receives a parameterized argument representing the radius of a circle and returns a double representing the circle's area.
 (The area is computed as 3.14 multiplied by the radius  squared )  
 .Develop a main() function that demonstrates that the function works correctly with either an integer or a double argument.*/

 #include<iostream>
 using namespace std;
 #define pi 3.14

 template<class t>

 double circlearea(t r)
 {
    return pi*r*r;
 }
 int main()
 {
    double result;
    

    result=circlearea(20);
    cout<<"result is:"<<result<<endl;;
    result=circlearea(20.43);
    cout<<"result is:"<<result<<endl;
 }