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
    struct node* next;
};
struct node *reverse (struct node *head, int k)
{
    struct node* current = head;
    struct node* next = NULL;
    struct node* prev = NULL;
    int count = 0;   
     
    /*reverse first k nodes of the linked list */
    while (current != NULL && count < k)
    {
        next  = current->next;
        current->next = prev;
        prev = current;
        current = next;
        count++;
    }
     
    /* next is now a pointer to (k+1)th node 
       Recursively call for the list starting from current.
       And make rest of the list as next of first node */
    if (next !=  NULL)
       head->next = reverse(next, k); 
 
    /* prev is new head of the input list */
    return prev;
}
 

void push(struct node** head_ref, int new_data)
{
    struct node* new_node =
            (struct node*) malloc(sizeof(struct node));
 
    new_node->data  = new_data;
 
    new_node->next = (*head_ref);    
 
    (*head_ref)    = new_node;
}
 
void printList(struct node *node)
{
    while (node != NULL)
    {
        printf("%d  ", node->data);
        node = node->next;
    }
}    
 
int main(void)
{
    struct node* head = NULL;
  
     push(&head, 9);
     push(&head, 8);
     push(&head, 7);
     push(&head, 6);
     push(&head, 5);
     push(&head, 4);
     push(&head, 3);
     push(&head, 2);
     push(&head, 1);           
 
     printf("\nGiven linked list \n");
     printList(head);
     head = reverse(head, 3);
 
     printf("\nReversed Linked list \n");
     printList(head);
 
     return 0;
}
