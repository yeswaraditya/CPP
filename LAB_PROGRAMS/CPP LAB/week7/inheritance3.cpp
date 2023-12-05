/* Create a base class named Book. Data fields include title and author;functions include those that display the fields. 
Derive two classes from the Book class: Fiction, which also contains a reading level, and Non Fiction, which contains a variable to hold the number of pages. 
The functions that display data field values for the subclasses should call the appropriate parent class functions to set and display the common fields,
 and include specific code pertaining to the new subclass fields. Write a main() function that demonstrates the use of the classes and their functions.*/

 #include<iostream>
 using namespace std;

 class book
 {
    protected:
    string title,author;

    public:
    book(string Title,string Author)
    {
        title=Title;
        author=Author;
    }

    void display()
    {
        cout<<"title is:"<<title<<" "<<"author is:"<<author<<endl;
    }

 };
 class fiction:public book
 {
    private:
    int readinglevel;

    public:
    fiction(string Title,string Author,int readingLevel):book(Title,Author)
    {
        readinglevel=readingLevel;
    }

    void display()
    {
        book::display();
        cout<<"reading level :"<<readinglevel<<endl;
    }
 };
 class nonfiction:public book
 {
    private:
    int numpages;

    public:
    nonfiction(string Title,string Author,int Numpages):book(Title,Author)
    {
        numpages=Numpages;
    }

    void display()
    {
        book::display();
        cout<<"no of pages:"<<numpages<<endl;
    }
 };
int main()
{  
    book first("alphabet a","eswar");
    fiction second("alphabet b","aditya",2);
    nonfiction third("alphabet c"," yarlagadda",23);

    first.display();

    cout<<"the second book is"<<endl;
    second.display();


    cout<<"the third book is"<<endl;
    third.display();
}