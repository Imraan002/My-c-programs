#include<bits/stdc++.h>
using namespace std;
#define ll long long
struct node
{
	int data;
	node* next;
	node* random;
	node(int val){
		this->data=val;
		this->next=NULL;
		this->random=NULL;
	}
};
void traverse(node* head)
{
	if(head==NULL)
		return;
	while(head!=NULL)
	{
		cout<<head->data<<" ";
		head=head->next;
	}
}
node* copy_linked_list(node* head)
{
	if(head==NULL)
		return NULL;
	node* temp=head;
	while(temp!=NULL)
	{
		node* save_node=temp->next;
		temp->next=new node(temp->data);
		temp->next->next=save_node;
		temp=save_node;
	}
	temp=head;
	while(temp!=NULL)
	{
		node* new_save=temp->random;
		if(temp->next!=NULL)
			temp->next->random=(temp->random!=NULL)?temp->random->next:NULL;
		temp=temp->next->next;
	}
	temp=head;
	node* newhead=head->next;
	while(temp!=NULL)
	{
		
		node* duplicate=temp->next;
		temp->next=temp->next->next;
		if(duplicate->next!=NULL)
			duplicate->next=duplicate->next->next;
		else
		{
			duplicate->next=NULL;
		}
		temp=temp->next;

	}
	return newhead;
}
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    node* head;
    node* node1 = new node(1);
    node* node2 = new node(2);
    node* node3 = new node(3);
    node* node4 = new node(4);
    head=node1;
    node1->next=node2;
    node2->next=node3;
    node3->next=node4;
    node1->random=node3;
    node2->random=node2;
    node3->random=node2;
    node4->random=node3;
    traverse(head);
    cout<<"\n";
    node* newhead=copy_linked_list(head);
    traverse(newhead);
    return 0;
}