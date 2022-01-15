#include<bits/stdc++.h>
using namespace std;
#define ll long long
class find_floor{
public:
	int floor(int arr[],int target)
	{
		int low=0;
		int high=3;
		if(target<arr[0])
			return -1;
		while(low<=high)
		{
			int mid=low+(high-low)/2;
			if(arr[mid]>target)
			{
				high=mid-1;
			}
			else if(arr[mid]<target)
			{
				low=mid+1;
			}
			else return mid;
		}
		return high;
	}
};
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int arr[]={1,4,6,8};
    int target=7;
    find_floor *obj=new find_floor();
    cout<<obj->floor(arr,target);
    return 0;
}