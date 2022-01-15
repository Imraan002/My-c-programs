#include <bits/stdc++.h>
using namespace std;
class Trie{
public:
	class node{
	public:
		node* next[26];
		bool end;
		node(){
			end=false;
			for(int i=0;i<26;i++)
			{
				next[i]=NULL;
			}
		}
	};
	node* trie;
	Trie()
	{
		 trie=new node();
	}
	void insert(string word)
	{
		int i=0;
		node* it=trie;
		while(i<word.size())
		{
			if(it->next[word[i]-'a']==NULL)
				it->next[word[i]-'a']=new node();
				it=it->next[word[i]-'a'];
			i++;
		}
		it->end=true;

	}
	bool search(string word)
	{
		int i=0;
		node* it=trie;
		while(i<word.size())
			{
				if(it->next[word[i]-'a']==NULL)
					return false;
				it=it->next[word[i]-'a'];
				i++;
			}
			return it->end;
	}
};
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	Trie* obj=new Trie();
	obj->insert("imran");
	if(obj->search("mahan"))
		cout<<"Exists"<<endl;
	else
		cout<<"doesn't exists"<<endl; 
return 0;
}