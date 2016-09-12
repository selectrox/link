#include<iostream>
using namespace std;
struct node
{
	int data;
	node*next;
}*ptr,*newptr,*temp,*head,*rear;
void printList(node*temp)
{
	while(temp!=NULL)
	{
		cout<<temp->data<<"->";
		temp=temp->next;
	}
}
node*create_new_node(int n)
{
	ptr=new node;
	ptr->data=n;
	ptr->next=NULL;
	return ptr;
}
void insert_end(node*temp)
{
	if(head==NULL)
	{
		head=rear=temp;
	}
	else
	{
		rear->next=temp;
		rear=temp;
		
	}
}

void del_front()
{
	if(head==NULL)
	{
	  cout<<"UNDERFLOW";
	}
	else
	{
		
		head->next=temp->next;
		temp=head;
		delete temp;
	}
}


int main()
{
     head=rear=NULL;
     int n;
     char ch='y';
     while(ch=='y'||ch=='Y')
     {
     	cout<<"\nEnter the info part of the new node:";
     	cin>>n;
     	cout<<"\nCreating new node....please wait....";
     	newptr=create_new_node(n);
		if(newptr==NULL)
        {
        	cout<<"cannot create the requested node";
        }
        if(newptr!=NULL)
        {
        	cout<<"\nnew node has been created successfully";
        }
        cout<<"\nInserting new node at the end of the list";
        insert_end(newptr);   
		cout<<"\nWant to enter more nodes? (press 'y' for yes and n for 'no')";
		cin>>ch;
	}
	do
	{
		cout<<"\nNow the required list is:";
		printList(head);
		cout<<"want to delete the nodes?";
		cin>>ch;
		if(ch=='y'||ch=='Y')
		   del_front();
		
	}while(ch=='y'||ch=='Y');
	return 0;
}
     	
     	  	
		     	
     	
      
    
	
	
	



