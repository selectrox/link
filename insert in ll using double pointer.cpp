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

struct node
{
	int data;
	node* next;
};


typedef node* nodeptr;
nodeptr create_new_node(int data)
{
	nodeptr nptr = new node;
	nptr->data = data;
	nptr->next=NULL;
	return nptr;
}

//Step 2 : InsertInBeg Function to insert node in the beginning of the list

void InsertInBeg(int n,nodeptr*head)
{
	nodeptr nptr= create_new_node(n);
	
	nptr->next= (*head);
	(*head)=nptr;
	//return (*head);
}

void DeleteAtK(nodeptr *head, int position)
{
	if ((*head) == NULL)
      return;
 
   // Store head node
   struct node* temp = (*head);
 
    // If head needs to be removed
    if (position == 0)
    {
        *head = temp->next;   // Change head
        free(temp);          // free old head
        return;
    }
 
    // Find previous node of the node to be deleted
    for (int i=0; temp!=NULL && i<position-1; i++)
         temp = temp->next;
 
    // If position is more than number of ndoes
    if (temp == NULL || temp->next == NULL)
         return;
 
    // Node temp->next is the node to be deleted
    // Store pointer to the next of node to be deleted
    struct node *next = temp->next->next;
    free(temp->next);  // Free memory
    temp->next = next;  // Unlink the deleted node from list
}



//Step 4: Print the list

void printList(nodeptr*head)
{
	nodeptr cur = *head;
	while(cur!=NULL)
	{
		if(cur->next==NULL)
			cout<<cur->data<<" ";
		else
			cout<<cur->data<<" --> ";
		cur=cur->next;
	}
}

int main()
{
	nodeptr head=NULL;
	char ch='y';
	int n,k;
	while(ch=='y'|| ch=='Y')
	{
		cout<<"Enter Number : ";
		cin>>n;
		
		InsertInBeg(n,&head);
		cout<<"Want to enter more numbers here?";
		cin>>ch;
	}
	cout<<"enter the position of node to delete:";
	cin>>k;
	DeleteAtK(&head,k);
	cout<<"Printing linked List :\n";
	printList(&head);
}














