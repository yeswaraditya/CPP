/* Display the count of apples and mangoes in a basket of fruits. Make three classes fruit, apple and mango.
 Fruit as the base class and apple and mango as child classes.
 The fruit class should contain the data member’s apples, mangoes, total_fruits and two functions to input values and calculate the total number of fruits in the basket.
 The child classes apple and mango should each contain a function that prints the number of apples/mangoes in the basket.*/
 #include<iostream>
 using namespace std;
 class fruit
 {  protected:
    int napple ,nmango,totalfruits;
    public:
    void read()
    {
        cout<<"enter apples mangoes "<<endl;
        cin>>napple>>nmango;

    }
    
    void calculate()
    {
        cout<<"total no of fruits"<<napple+nmango<<endl;

    }
 };
 class apple:public fruit
 {
    public:
    void display()
    {
        cout<<"no of apples:"<<napple<<endl;
        

    }

 };
 class mango:public fruit
 {
    public:
    void display()
    {
        cout<<"no of mangoes:"<<nmango<<endl;
        

    }

 };
 int main()
 {
    fruit f;
    f.read();

    apple a;
    a.display();

    mango m;
    m.display();

    f.calculate();
 }