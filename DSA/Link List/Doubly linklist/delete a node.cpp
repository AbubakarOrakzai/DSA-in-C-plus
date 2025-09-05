#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int value)
    {
        data=value;
        next=NULL;
        prev=NULL;
    }};
    void insertnodeatthehead(Node* &head, int value)
    {
        Node* n=new Node(value);
         n->next = head; 
        if(head!=NULL)
        {
            head->prev=n;
        }
        head=n;
    }
    void insertatthetail(Node* &head, int value)
    {
        if(head==NULL)
        {
            insertnodeatthehead(head,value);
            return;
        }
        Node* n=new Node(value);
        Node* temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=n;
        n->prev=temp;
    }
   
    void delete_head(Node* &head)
    {
        Node* todelete=head;
        head=head->next;
        if(head!=NULL)
        {
            head->prev=NULL;
        }
        delete todelete;
    }
     void displayNodes(Node* head)
    {
        Node* temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }

int main()
{
    Node* head=NULL;
    insertnodeatthehead(head,99);
    insertatthetail(head,100);
    cout<<"This is link list with all nodes"<<endl;
    displayNodes(head);
    delete_head(head);
    cout<<"Now i will delete the node and boom"<<endl;
   displayNodes(head);
}
