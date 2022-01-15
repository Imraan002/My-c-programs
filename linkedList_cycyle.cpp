#include <bits/stdc++.h>
using namespace std;
#define ll long long
struct node
{
    int data;
    node *next;
    node(char val)
    {
        this->data = val;
        this->next = NULL;
    }
};
void detach(node* head)
{
    int temp=head->data;                    //deleting the link
    while(head->next->data!=temp)
    {
        head=head->next;
    }
    head->next=NULL;

}
void find_meet_point(node* head,node* meet)
{
	if(head==NULL)
		return ;
	node* strt=head;
	while(strt!=meet)                          //point where cycle is formed
	{
		strt=strt->next;
		meet=meet->next;
	}
	cout<<strt->next->data<<"\n";
	detach(strt);
}
bool detect_cycle(node* head)
{
	if(head==NULL)
		return false;
	node* slow=head;
	node* fast=head;
	while( fast!=NULL && fast->next!=NULL)
	{
		slow=slow->next;
		fast=fast->next->next;
		if(fast==slow)                    //detecting cycle
		{
			find_meet_point(head,fast);
			return true;
		}
	}
	return false;
}
void traverse(node *head)
{
    if (head == NULL)
        return;
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    node *head;
    node *node1 = new node(1);
    node *node2 = new node(2);
    node *node3 = new node(3);
    node *node4 = new node(4);
    node *node5 = new node(5);
    head = node1;
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next=node5;
  	node5->next=node2;
    bool ans=detect_cycle(head);
    if(ans)
    	cout<<"Cycle is present\n";
    else
    	cout<<"No cycle present\n";
      cout<<"Cycle Removed\n";
    traverse(head);
     return 0;
}