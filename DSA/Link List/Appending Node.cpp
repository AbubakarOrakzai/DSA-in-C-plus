Appending the Node 
#include<iostream>
using namespace std;
class Node
{
    public:
    int key;
    int data;
    Node* next;
    Node()
    {
        key=0;
        data=0;
        next=NULL;
    }
    Node(int k, int d)
    {
        key=k; 
        data=d;
    }
};
class SinglyLinkList
{
    public:
    Node* head;
    SinglyLinkList()
    {
        head=NULL;
    }
   SinglyLinkList(Node *n)
   {
       head=n;
   }
   Node* nodeExists(int k)
   {
       Node* temp=NULL;
       Node* ptr=head;
       while(ptr!=NULL)
       {
        if(ptr->key==k)
        {
            temp=ptr;
        }
        ptr=ptr->next;
       }
       return temp;
   }
   void appendedNode(Node *n)
   {
       if(nodeExists(n->key)!=NULL)
       {
           cout<<"Node already exist with the key value "<<n->key<<"Append another key value "<<endl;
       }
       else
       {
           if(head==NULL)
           {
              head=n;
              cout<<"Node Appended"<<endl;
           }
           else 
           {
               Node* ptr=head;
               while(ptr->next!=NULL)
               {
                   ptr=ptr->next;
               }
               ptr->next=n;
               cout<<"Node Appended"<<endl;
           }
       }
   }
};
    int main()
{
    Node* n1 = new Node(1, 10);
    Node* n2 = new Node(2, 20);
    Node* n3 = new Node(3, 30);

    SinglyLinkList sll;
    sll.appendedNode(n1);
    sll.appendedNode(n2);
    sll.appendedNode(n3);

    Node* n4 = new Node(2, 40); 
    sll.appendedNode(n4);
}


