#include <bits/stdc++.h>
using namespace std;
#define ll long long
string pre,in,post;
struct tree
{
    int data;
    tree *left;
    tree *right;
    tree(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
void solve(tree* root)
{
    if(root==NULL)
        return;
    stack<pair<tree*,int>> st;
    st.push({root,1});
    while(!st.empty())
    {
        auto it=st.top();
        if(it.second==1)
        {
            pre+=it.first->data;
            it.second++;
            if(it.first->left!=NULL)
            {
                st.push({it.first->left,1});
            }
        }
        else if(it.second==2)
        {
            in+=it.first->data;
            it.second++;
            if(it.first->left!=NULL)
            {
                st.push({it.first->right,1});
            }
        }
        else if(it.second==3)
        {
            post+=it.first->data;
            st.pop();
        }
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
    cout.tie(NULL);
    tree *root = new tree(1);
    root->left = new tree(2);
    root->right = new tree(3);
    root->left->left = new tree(4);
    root->left->left->left = new tree(5);
    root->left->left->right = new tree(6);
    root->right->left = new tree(7);
    root->right->right = new tree(8);
    root->right->left->right = new tree(9);
    root->right->right->left = new tree(10);
   solve(root);
    return 0;
}