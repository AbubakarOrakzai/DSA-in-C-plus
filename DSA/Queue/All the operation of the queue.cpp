#include<iostream>
using namespace std;
class node
{
	public:
		int data;
		node* next;
		
		node(int value)
		{
			data=value;
			next=NULL;
		}
};
class queue
{
	public:
		node* front;
		node* rear;
		queue()
		{
			front=rear=NULL;
		}
		void enqueue(int value)
		{
			node* newnode=new node(value);
			if(rear==NULL)
			{
				front=rear=newnode;
			}
			else
			{
			rear->next=newnode;
			rear=newnode;
		}
		cout<<value<<" :endqueue to the queue"<<endl;	
	}
	
void dequeue()
{
	if(front==NULL)
	{
		cout<<" :Queue is empty. cannot dequeue"<<endl;
	}

node* temp=front;
front=front->next;
if(front==NULL)
{
	rear=NULL;
	cout<<temp->data<<"dequeue from the queue"<<endl;
}
	delete temp;
}
void display()
{
	if(front==NULL)
{
	cout<<"Queue is empty";
	return;
}
node*temp=front;
cout<<"Queue";
}

 void disply()
 {
 	node*temp=front;
 while(temp!=NULL)
{
	cout<<temp->data<<" ";
	temp=temp->next;
}
cout<<"\n";
}
bool isEmpty()
{
	return front=NULL;
}
int peek()
{
	if(front==NULL)
	{
		cout<<"Queue is empty"<<endl;;
		return -1;
	}
	return front->data;


}};
int main() {
    queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();
    q.dequeue();
    q.display();
    cout << "Front element is: " << q.peek() << endl;
    return 0;
}

