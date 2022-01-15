#include <bits/stdc++.h>
using namespace std;
class trienode{
	public:
	trienode* next[26];
	bool end;
	trienode(){
		for(int i=0;i<26;i++)
		{
			next[i]=NULL;
		}
		end=false;
	}
};
class Trie{
public:
	trienode* root;
	Trie(){
		root=new trienode();
	}
	void insert(string word)
	{
		int i=0;
		trienode* it=root;
		while(i<word.size())
		{
			if(it->next[word[i]-'a']==NULL)
				it->next[word[i]-'a']=new trienode();
			it=it->next[word[i]-'a'];
			i++;
		}
		it->end=true;
	}
	void search(string word)
	{
		int i=0;
		trienode* it=root;
		while(i<word.size())
		{
			if(it->next[word[i]-'a']==NULL)
			{
				cout<<"No Suggestion"<<endl;
				return;
			}
			it=it->next[word[i]-'a'];
			i++;
		}
		vector<string> res;
		
		display(it,res,word,"");
		for(auto k:res)
		{
			cout<<word<<k<<endl;
		}
	}
	void display(trienode* it,vector<string> &res,string &word,string curr)
	{
		if(it==NULL)
			return;
		if(it->end)
			res.push_back(curr);
		for(int i=0;i<26;i++)
		{
			if(it->next[i])
				display(it->next[i],res,word,curr+char('a'+i));
		}
	}

};
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
int n;
cin>>n;
Trie* dict=new Trie();
vector<string> vec(n);
for(int i=0;i<n;i++)
{
	cin>>vec[i];
	dict->insert(vec[i]);

}

int q;
cin>>q;
string query;
while(q--)
{
	cin>>query;
	dict->search(query);
	
}
return 0;
}