#include<iostream>
using namespace std;
class Node
{	
    public:
    int data;
    Node* next;
    Node* prev;
    
    Node(int value){
        data=value;
        next=NULL;
        prev=NULL;
    }
};
void insertAtHead(Node* &head, int val)
{
    Node* n=new Node(val);
    n->next=head;
    if(head!=NULL)
    {
        head->prev=n;
    }
    head=n;
}
void display(Node* head)
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
    insertAtHead(head,1);
    display(head);
}
