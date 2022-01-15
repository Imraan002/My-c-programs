#include<bits/stdc++.h>
using namespace std;
#define ll long long
struct node{
	public:
	int data;
	node* next;
	node(int x)
	{
		this->data=x;
		this->next=NULL;
	}
};
void print(node* root)
{
	if(root==NULL)
		return;
	cout<<root->data<<" ";
	print(root->next);
}
node* reverse(node* root)
{
	if(root==NULL || root->next==NULL)
		return root;
	node* temp=reverse(root->next);
	root->next->next=root;
	root->next=NULL;
	return temp;

}
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    node* root=new node(1);
    root->next=new node(2);
    root->next->next=new node(3);
    root->next->next->next=new node(4);
    print(root);
    cout<<"\n";
    node* temp=reverse(root);
    print(temp);
    return 0;
}