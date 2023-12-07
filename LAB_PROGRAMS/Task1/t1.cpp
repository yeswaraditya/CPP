#include<iostream>
using namespace std;
class Article
{
    private:
    long articleNumber;
    string articleName;
    double salesPrice;

   public:
    Article(long num,const string& nme,double sp)
    {
        articleNumber=num;

       
        articleName=nme;

       
        salesPrice=sp;

        if(sp<0)
        {
            salesPrice=0.0;
        }
    }

    ~Article()
    {

    }

    void print()
    {

    }
};
Article articleobj1( 1111,"volley ball", 59.9);

void test()
{
    Article shirt(3333,"T-shirt",29.9);
    shirt.print();
    static Article net(4444,"volley ball net",99.0);
    net.print();
    cout<<"\nlast statement in function test()"<<endl;
}

int main()
{
   cout<<"\n the first statement in main().\n"<<endl;
   Article articleobj2(2222,"gym-shoes",199.99);
   articleobj1.print();
   articleobj2.print();
   Article& shoes=articleobj2;//this creates alias name for articleobj2;
   shoes.setarticleNumber(2233);
   shoes.setarticleName("jogging shoes");
   shoes.setsalesPrice(89.99);
   cout<<"the new values of the shoes object:\n";
   shoes.print();
   cout<<"\nthe first call to test()\n"<<endl;
   test();
   cout<<"\n the second call to test()."<<endl;
   test();
   cout << "\nThe last statement in main().\n" << endl;
   return 0;




}