#include<bits/stdc++.h>
using namespace std;
#define ll long long
class my_stack{
public:
	int top;
	int size;
	int capacity;
	int *arr;
	my_stack(int capac)
	{
		this->capacity=capac;
		arr=new int[capacity];
		this->top=-1;
		this->size=0;
	}
	void push(int data)
	{
		if(top==capacity-1)
		{
			cout<<"Stack is full\n";
			return;
		}
		top++;
		arr[top]=data;
		size++;
	}
	void pop()
	{
		if(top==-1)
		{
			cout<<"Stack is Empty \n";
			return;
		}
		cout<<arr[top]<<" is popped\n";
		top--;
		size--;
	}
	int top_element()
	{
		if(top==-1)
		{
			cout<<"Stack is empty\n";
			return -1;								//stack using Array
		}
		return arr[top];
	}
	int size_of()
	{
		return size;
	}
	bool isempty()
	{
		if(top==-1)
			return true;
		else
			return false;
	}
};
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
 	my_stack *st=new my_stack(5);
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