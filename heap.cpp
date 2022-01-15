#include <bits/stdc++.h>
using namespace std;
void insert(int val,vector<int> &arr)
{
	arr.push_back(val);
	int i=arr.size()-1;
	if(i==1)
		return;
	while(i>1)
	{										//insertion
		int par=i/2;
		if(arr[par]<arr[i])
		{
			swap(arr[par],arr[i]);
			i=par;
		}
		else
			return;
		}
}
void del(vector<int> &arr)
{
	if(arr.size()==1)
	{
		cout<<"Heap is empty "<<endl;
		return;
	}
	if(arr.size()==2)
	{
		arr.pop_back();
		return;
	}
	int i=1;
	int large;
	arr[i]=arr[arr.size()-1];
	arr.pop_back();							//deletion from a heap
	int n=arr.size()-1;
	while(i<n)
	{
		if(2*i>n && 2*i+1>n)
		{
			break;
		}
		else if(2*i+1>n && 2*i<n)
		{
			 large=arr[2*i];
		}
		else if(2*i+1<n && 2*i>n)
		{
			large=arr[2*i+1];
		}
		else
		{
			int left=arr[2*i];
			int right=arr[2*i+1];
			large=(left<right?2*i+1:2*i);

		}
		if(arr[i]<arr[large])
		{
			swap(arr[i],arr[large]);
			i=large;
		}
		else
			return;
	}

}
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif												//insertion and deletion in a heap
ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
vector<int> arr;
arr.push_back(-1);
insert(34,arr);
insert(124,arr);
insert(65,arr);
insert(56,arr);
insert(10,arr);
for(int i=0;i<arr.size();i++)
{
	if(arr[i]==-1)
		continue;
	else
	cout<<arr[i]<<" ";
}
cout<<endl;
del(arr);
del(arr);
del(arr);
del(arr);
del(arr);
for(int i=0;i<arr.size();i++)
{
	if(arr[i]==-1)
		continue;
	else
	cout<<arr[i]<<" ";
}
return 0;
}