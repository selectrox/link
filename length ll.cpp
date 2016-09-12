#include<bits/stdc++.h>

using namespace std;

#define ll long long int

#define s(x) scanf("%lld",&x)
#define s2(x,y) s(x)+s(y)
#define s3(x,y,z) s(x)+s(y)+s(z)

#define p(x) printf("%lld\n",x)
#define p2(x,y) p(x)+p(y)
#define p3(x,y,z) p(x)+p(y)+p(z)
#define F(i,a,b) for(ll i = (ll)(a); i <= (ll)(b); i++)
#define RF(i,a,b) for(ll i = (ll)(a); i >= (ll)(b); i--);(i)++)

#define ff first
#define ss second
#define mp(x,y) make_pair(x,y)
#define pll pair<ll,ll>
#define pb push_back
typedef struct node* nodeptr;
struct node
{
	int data;
	node*next;
};
 
 nodeptr  CreateNode(int data)
 {
 	nodeptr nptr=new node;
 	nptr->data=data;
 	nptr->next=NULL;
 	return nptr;
 }
 
 void InsertInEnd(int n,nodeptr*headref)
{
	nodeptr nptr= CreateNode(n);
	if((*headref) ==NULL)
 	{
 		
 		(*headref)=nptr;
 		//return *head;
 	}
	

 	else
 	{
 		nodeptr cur=*headref;
	
 		while (cur->next != NULL)
        {         
          cur = cur->next;        
        }
        nptr->next = NULL;
        cur->next = nptr;
        cout<<"Element Inserted at last"<<endl;  
   	}

 }

void printList(nodeptr head)
{
	while(head!=NULL)
	{
		if(head->next==NULL)
			cout<<head->data<<" ";
		else
			cout<<head->data<<" --> ";
		head=head->next;
	}
}

void CalcLength(nodeptr *head)
{
	int count=0;
	nodeptr temp=(*head);
	while(temp!=NULL)
	{
	   temp=temp->next;
	   count++;	
	}
	cout<<"\nlength of link list is:"<<count<<endl;
	
} 
int main()
{
	
	nodeptr head=NULL;
	char ch='y';
	int n;
	while(ch=='y'|| ch=='Y')
	{
		cout<<"Enter Number to be inserted : ";
		cin>>n;
		
		 InsertInEnd(n,&head);
		cout<<"Want to enter more numbers here(y/n)?";
		cin>>ch;
	}
	cout<<"calculating length of ll"<<endl;
	CalcLength(&head);
	
	cout<<"Printing linked List :\n";
	printList(head);
}


