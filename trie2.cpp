#include<bits/stdc++.h>
using namespace std;
#define ll long long
class TrieNode{

	public:
		char value;
		TrieNode* children[26];
		bool is_terminal;

		TrieNode(char ch)
		{
			this->value=ch;
			for(int i=0;i<26;i++)
			{
				children[i]=NULL;
			}
			this->is_terminal=false;
		}
};

class Trie{

	public:
		void insert(TrieNode* root,string word)
		{
			if(word.length()==0)
			{
				root->is_terminal=true;
				cout<<"inserted\n";
				return ;
			}
			int index = word[0]-'a';

			TrieNode* temp;
			if(root->children[index]!=NULL)
			{
				temp=root->children[index];
			}
			else{
				root->children[index]= new TrieNode(word[0]);
				temp=root->children[index];
			}

			insert(temp,word.substr(1));
		}

		bool search(TrieNode* root, string word)
		{
			if(word.length()==0)
			{
				if(root->is_terminal)
					return true;
			}
			int index = word[0]-'a';

			TrieNode* temp;
			
			while(root->children[index]!=NULL)
			{
				temp=root->children[index];
				return search(temp,word.substr(1));
			}

			return false;
		}
		void remove(TrieNode* root,string word)
		{
			if(word.length()==0)
			{
				root->is_terminal=false;
				cout<<"Deleted\n";
				return;
			}
			if(search(root,word)==false)
			{
				cout<<"Word not found\n";
				return;
			}
			TrieNode* temp;
			int index = word[0]-'a';
			while(root->children[index]!=NULL)
			{
				temp = root->children[index];
				return remove(temp,word.substr(1));
			}
		}
};
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    TrieNode* root = new TrieNode('\0');

    Trie* obj = new Trie;
    obj->insert(root,"imraan");
  
    obj->insert(root,"hussain");

    obj->remove(root,"imraan");
    bool ans=obj->search(root,"imraan");
    if(ans)
    	cout<<"Found\n";
    else
    	cout<<"Not Found\n";

    return 0;
}