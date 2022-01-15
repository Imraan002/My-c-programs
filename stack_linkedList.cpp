#include<bits/stdc++.h>
using namespace std;
#define ll long long
class node{
	public:
	int data;
	node* next;
	node(int val)
	{
		this->data=val;
		this->next=NULL;
	}
};
class my_stack{
	public:
		node* head;
		int size;
		my_stack()
		{
			head=NULL;					//Stack using LinkedList
			size=0;		
		}
		void push(int data)
		{
			node* temp=new node(data);
			temp->next=head;
			head=temp;
			size++;
		}
		void pop()
		{
			if(size==0)
			{
				cout<<"Stack is empty\n";
				return;
			}
			cout<<head->data<<" is popped\n";
			head=head->next;
			size--;
		}
		int top_element()
		{
			if(size==0)
			{
				cout<<"Stack is empty\n";
				return -1;
			}
			return head->data;
		}
		int size_of()
		{
			return size;
		}
		bool isempty()
		{
			return size==0;
		}

};
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    my_stack *st=new my_stack();
    st->push(1);
    st->push(2);
    st->push(3);
    st->push(4);
   while(!st->isempty())
   {
   	cout<<st->top_element()<<"\n";
   	st->pop();
   }
    return 0;
}