/* Suppose you have a Piggie Bank with an initial amount of $50 and you have to add some more amount to it. 
Create a class ‘AddAmount’ with a data member named ‘amount’ with an initial value of $50. Now make two constructors of this class as follows:
- without any parameter - no amount will be added to the Piggie Bank
- having a parameter which is the amount that will be added to the Piggie Bank
Create an object of the ‘AddAmount’ class and display the final amount in the PiggieBank.*/

#include<iostream>
using namespace std;

class addamount
{
   private:
   int amount;


   public:
   addamount()
   {
      amount=50;
      cout<<"no money added to the account";

      
   }

   addamount(int n)
   { amount=50;
     amount=amount+n;
   }

   void display()
   {
     cout<<"amount in pig bank:"<<amount;
   }
};

int main()
{ int n;
   
    cout<<"enter amount to add in pig bank";
    cin>>n;
    
    if(n)
    {
        addamount a(n);
        a.display();
    }
    else
    {
    addamount a;
    a.display();
    }
}
