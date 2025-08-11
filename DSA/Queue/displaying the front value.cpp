//Write a function to return the front element of a queue 
//implemented using singly linked list without removing it.
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
class Queue
{
	private:
		node* front;
		node* rear;
		public:
			Queue()
			{
				front=NULL;
				rear=NULL;
			}
			void enqueue(int value)
			{
				node* newnode=new node(value);
				if(rear==NULL)
				{
					rear=front=newnode;
				}
				rear->next=newnode;
				rear=newnode;
			}
		void peek()
			{
				if(front==NULL)
				{
					cout<<"The Queue is empty"<<endl;
				}
				else
				{
					cout<<"The front value of the Queue is "<<front->data;
				}
			}
};
int main()
{
	Queue q;
	q.enqueue(32);
	q.enqueue(45);
	q.enqueue(50);
	q.peek();
}
