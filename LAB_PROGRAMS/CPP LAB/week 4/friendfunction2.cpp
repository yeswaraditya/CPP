/* Create a class ‘box’ and ‘product’ with their data members as volume for box of double data type and box class must have the member function 
of setvolume- it initializes the datamember.Create a friend function checksize which gets both box and product object and it returns a bool value. 
The friend function shall return true if a product fits into the box. l*b*d&lt;v.box fits otherwise return false.Create a class product with 3 data members length, width and 
depth and class product is having function set dimension (initializes l,w,d) the friend function existing in both theclasses.*/

#include<iostream>
using namespace std;
class product; // forward declaration

class box
{ private:
  double volume;

  public:
  void setvolume()
  {
    cin>>volume;
  }

  friend bool checksize(box,product);

};

class product
{ private:
  int length,width,depth;
  
  public:
  void setdimension()
  {
    cin>>length>>width>>depth;
  }

  friend bool checksize(box,product);
};
bool checksize(box b1,product p1)
{ 
    double cksize;
    cksize=p1.length*p1.width*p1.depth;
    
    if( cksize>=b1.volume)
    {
        return true;
    }
    else
    return false;
}

int main()
{
    box b1;
    product p1;

    b1.setvolume();
    p1.setdimension();

    bool res=checksize(b1,p1);

    if(res)
    {
        cout<<"product fits into box ";
    }

    else
    {
        cout<<"product dosent fit into box";
    }

}