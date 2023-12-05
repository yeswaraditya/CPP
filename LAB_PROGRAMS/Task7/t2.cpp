#include<iostream>
using namespace std;


class Node
{
    public:
    int data;
    Node *next;

    Node(int val)
    {
      this-> data=val;
      this-> next=NULL;
    }
    
};

class List
{
    public:
    Node *head,*tail;

    List()
    {
        head=NULL;
        tail=NULL;
        

    }
    
    void append(Node* node)
    {
        if(head==NULL)
        {
            head=node;
            tail=node;
        }
        else{

            tail->next=node;
            tail=node;
        }
    }
    void display()
    {
            Node* current=head;
            while (current!=NULL)
            {
                cout<<current->data<<"->";
                current=current->next;
            }
            cout<<"NULL"<<endl;
            

    }

};

int main()
{
    List list;


    //creates nodes
    Node* nodeobj1=new Node(10);//new is a keyword that dynamically allocates memory
    Node* nodeobj2=new Node(20);
    Node* nodeobj3=new Node(30);
    Node* nodeobj4=new Node(40);
   
   //append nodes
   list.append(nodeobj1);
   list.append(nodeobj2);
   list.append(nodeobj3);
   list.append(nodeobj4);

   //display list 
   list.display();

}
