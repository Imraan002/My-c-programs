#include<bits/stdc++.h>
using namespace std;
#define ll long long
void swap(vector<int> &arr,int l,int r)
{
	int temp=arr[l];
	arr[l]=arr[r];
	arr[r]=temp;

}
void display(vector<int> &arr)
{
	for(int i=0;i<arr.size();i++)
	{
		cout<<arr[i];
		
			}
			cout<<"\n";
}
vector<vector<int>> find_permutation(vector<vector<int>> &ans,vector<int> &arr,int l,int r)
{
	if(l==r)
	{
		ans.push_back(arr);
		return ans;
	}
	for(int i=l;i<=r;i++)
	{
		swap(arr,l,i);

		ans=(find_permutation(ans,arr,l+1,r));

		swap(arr,l,i);
	}
	return ans;
}
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    

    int n;
    cin>>n;

    vector<int> arr;
    for(int i=0;i<n;i++)
    {
    	int a;
    	cin>>a;
    	arr.push_back(a);
    }
   
   vector<vector<int>> ans;
   vector<vector<int>>res=find_permutation(ans,arr,0,n-1);

   for(auto k:res)
   {
   	for(auto t:k)
   	{
   		cout<<t;
   	}
   	cout<<"\n";
   }
   
     
    return 0;
}