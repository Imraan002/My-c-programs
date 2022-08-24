#include<bits/stdc++.h>
using namespace std;
#define ll long long
map<int,vector<int>> mp;

void display(vector<vector<int>> &matrix)
{
	for(int i=0;i<matrix.size();i++)
	{
		for(int j=0;j<matrix.size();j++)
		{
			cout<<matrix[i][j]<<" ";
		}
		cout<<"\n";
	}
}
vector<vector<int>> rotate(vector<vector<int>>& matrix) {
        
        vector<int> temp;
        
       
        
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=matrix.size()-1;j>=0;j--)
            {
                temp.push_back(matrix[j][i]);
            }
            mp.insert({i,temp});
            temp.clear();
        }
        for(int i=0;i<matrix.size();i++)
        {
        	for(int j=0;j<matrix.size();j++)
        	{
        		matrix[i][j]=mp[i][j];
        	}
        }
        
        return matrix;
    }
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    vector<vector<int>> matrix={{1,2,3},{4,5,6},{7,8,9}};

    vector<vector<int>> ans=rotate(matrix);
    for(auto k:mp)
    {
    	for(auto t:k.second)
    	{
    		cout<<t<<" ";
    	}
    	cout<<"\n";
    }


   display(matrix);
    return 0;
} 