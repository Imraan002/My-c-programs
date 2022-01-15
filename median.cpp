#include <bits/stdc++.h>
using namespace std;
priority_queue<int,vector<int>>mxpq;
priority_queue<int,vector<int>,greater<>>mnpq;
void insert(int x)
{
	
	if(mxpq.size()==mnpq.size())
	{
		if(mxpq.size()==0)
		{
			mxpq.push(x);
			return;
		}
		if(x>mxpq.top())
		{
			mnpq.push(x);
		}
		else
		{
			mxpq.push(x);
		}
	}
	else
	{
		if(mxpq.size()>mnpq.size())
		{
			if(x>mxpq.top())
			{
				mnpq.push(x);
			}
			else
			{
				int temp=mxpq.top();
				mxpq.pop();
				mnpq.push(temp);
				mxpq.push(x);
			}
		}
		else
		{
			if(x<mnpq.top())
			{
				mxpq.push(x);
			}
			else
			{
				int temp=mnpq.top();
				mnpq.pop();
				mxpq.push(temp);
				mnpq.push(x);
				
			}
		}
	}
}
double findmedian()
{
	if(mxpq.size()==mnpq.size())
	{
		return (mxpq.top()+mnpq.top())/2.0;
	}
	else
	{
		if(mxpq.size()>mnpq.size())
		{
			return mxpq.top();
		}
		else
		{
			return mnpq.top();
		}
	}
}
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
insert(10);
cout<<findmedian()<<endl;
insert(15);
cout<<findmedian()<<endl;
insert(21);
cout<<findmedian()<<endl;
insert(30);
cout<<findmedian()<<endl;
insert(18);
cout<<findmedian()<<endl;
insert(19);
cout<<findmedian()<<endl;
return 0;
}