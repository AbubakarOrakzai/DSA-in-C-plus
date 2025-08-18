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
			next=Null;
		}
		Node(int k, int d)
		{
			key=k; 
			data=d;
		}
};
class SingleLinkList{
	public:
		Node* head;
		SingleLinkList(Node *n)
		{
			head=n;
		}
		
		==================1. Check if node exists using key value================================= 
		Node* nodeExist(int k)
		{
			Node* temp=Null;
			Node* ptr=head;
			while(ptr!=Null)
			{
				if(ptr->key==k)
				{
					temp=ptr;
				}
				ptr=ptr->next;
			}
			return temp; temp will have address of the that particular node(ptr)
		}
	========================2. Append a node to the list=======================================
		void appendNode(Node *n)
		{
			if(nodeExists(n->key)!=Null)
			{
				cout<<"Node Already exists with key value "<<n->key<<"Append another node with different key value "<<endl;
			}
			else 
			{
				if(head=Null)
				{
					head=n;
					cout<<"Node Appended"<<endl;
				}
				else{
					Node* ptr =head;
					while(ptr->next!=Null)
					{
						ptr=ptr->next;
					}
					ptr->next=n;
					cout<<"Node Appended"<<endl;
				}
			}
		}
	=========================3. Preprend Node . Attach a node at the start==============================
		{
			if(nodeExists(n->key)!=Null)
			{
				cout<<"Node Already exists with key value "n->key<<"Append another with different value "<<endl;
			}
			else 
			{
				n->next=head;
				head=n;
				cout<<"Node Prepended"<<endl;
			}
		}
	=========================4. Insert a Node after a particular node in the list   ===================================
		void insertNodeAfter(int k, Node *n) k is the key value after which we insert our node
		                                        and n is n is actual node which is the address of the node   
           {
           	First we will traverse
           	we will is the exist with a particular key(k)
           	
           	Node *ptr =nodeExist(k) we are using this because beside check either the key exist we also want access it 
           	if(ptr==Null)
           	{
           		cout<<"No node Exist with key value "<<k<<endl;
			   }
			   else   if the node Exist
			   {
			   	n->next=ptr->next;
			   	ptr->next=n;
			   	cout<<"Node Inserted"<<endl;
			   }
		   }
     }
 };
 
 =================5. Delete node by unique key========================================
 void delteNodebykey(int k)
 {
 	if(head==Null)
 	{
 		cout<<"Singly Linked list already Emplty. Can not delete"<<endl;
	 }
	 else if(head!==Null)
	 {
	 	head=head->next;
	 	cout<<"Node unlinked with keys value "<<endl;
	 }
	 else
	 {
	 	Node* temp=Null;
	 	Node* preptr=head;
	 	Node* currentptr!=Null;
	 	while(currentptr!=Null)
	 	{
	 		if(currentptr->key==k)
	 		{
	 			temp=currentptr;
	 			currentptr=Null;
			 }
			 else
			 {
			 	preptr=preptr->next;
			 	curretnptr=currentptr->next;
				  }	 
		 }
		 if(temp!=Null)
		 {
		 	preptr->next=temo->next;
		 	cout<<"Node Unliked with key value"<<k<<endl;
		 }
		 else
		 {
		 	cout<<"Node Does not exist with key value "<<k<<endl;
		   }
	     }   
       }
     }

=============  6. Update node============
void updateNodeByKey(int k, int d)
{
	Node* ptr=nodeExists(k);
	if(ptr!=Null)
	{
		ptr->data=d;
		cout<<"Node Data Updates Successfully"<<endl;
	}
	else
	{
		cout<<"Node Does not Exist with key value "<<k<<endl;
	}
}

=========== 7. Printing  ================
void printlist()
{
	if(head==Null)
	{
		cout<<"No Node in Singly Linked list"<<endl;;
	}
	else
	{
		cout<<"Singly Linked List Values"<<endl;
		Node* temp=head;
		
		While(temp!=Null)
		{
			cout<<"("<<temp->key<<","<<temp->data")-->";
			temp=temp->next;
		}
		}
};
int main()
{
	SinglyLinkList s;
	int option;
	int key1,k1,data1;
	do
	{
		cout<<"What operation do you want to perform? Select option number. Enter 0 to Exist"<<endl;
		cout<<"1. appendNode()"<<endl;
		cout<<"2. prependNode()"<<endl;
		cout<<"3. inserNodeAfter()"<<endl;
		cout<<"4. deleteNodeByKey("<<endl;
		cout<<"5. updateNodeByKey()"<<endl;
		cout<<"6. print()"<<endl;
		cout<<"7. clear screen "<<endl<<endl;
		
		cin>>option;
		Node*n1=new Node();
		
		switch(option)
		{
			case 0:
				break;
				case 1:
					cout<<"Append Node Operation "<<emdl;
					cout<<"Enter the key and data of the Node to be Appended"<<endl;
					cin>>key1;
					cin>>data1;
					n1->key=key1;
					n->data=data1;
					s.appendNode(n1);
					break;
					
			case 2:
				cout<<"Prepend Node Operation "<<endl;
				cout<<"Enter key and data of the Node to be Prepended"<<endl;
				cin>>key1;
				cin>>data1;
				n1->key=key1;
				n1->data=data1;
				s.prependNode(n1);
				break;
				
				case 3:
					cout<<"Insert Node after Operation "<<endl;
					cout<<"Enter key of existing Node after which you want to Insert this New Node"<<endl;
					cin<<key1;
					cin>>data1;
					n1->key=key1;
					n1->data=data1;
					s.insertNodeAfter(k1,n1);
					break;
					
				case 4:
					cout<<"Delete Node By key Operation "<<endl;
					cout<<"Enter key of the Node to be delete"<<endl;
					s.deleteNodeByKey(K1);
					
				case 5:
					cout<<"Update Node By Key Operation "<<endl;
					cout<<"ENter Key and New data to be Updated "<<endl;
					cin>>key1;
					cin>>data1;
					s.updateNodeByKey(Key1,data1);
					break;
					
			    case 6:
				s.printList();
				breakl
				
				case 7:
				system("cls");
				break;
				default:
				cout<<"Enter Proper option number "<<endl;	
				
		}
		
	}
	while(option!=0);
	return 0;
}

