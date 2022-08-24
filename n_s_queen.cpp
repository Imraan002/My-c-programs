#include<bits/stdc++.h>
using namespace std;
#define ll long long

vector<vector<int>> board;

int ans=0;
bool check(int row,int col)
    {
        for(int i=0;i<board.size();i++)
        {
            if(board[i][col]==1)
                return false;
        }
        for(int i=0;i<board[row].size();i++)
        {
            if(board[row][i]==1)
                return false;
        }
        int trow=row;
        int tcol=col;
        while(trow>=0 && tcol>=0)
        {
            if(board[trow][tcol]==1)
                return false;
            trow--;
            tcol--;
        }
        trow=row;
        tcol=col;
        while(trow>=0 && tcol<board[row].size())
        {
            if(board[trow][tcol]==1)
                return false;
            trow--;
            tcol++;
        }

        int X[]={-2,-2,2,2,-1,1,-1,1};
        int Y[]={1,-1,1,-1,-2,-2,2,2};

        for(int i=0;i<8;i++)
        {
        	int xpos = row+X[i];
        	int ypos = col+Y[i];
        	if(xpos>=0 && xpos<board.size() && ypos>=0 && ypos<board[row].size())
        	{
        		if(board[xpos][ypos]==1)
        			return false;
        	}
        }

    return true;
    }
void solve(int row,int col)
{
    
    
    if(row==board.size())
    {
       
        ans+=1;
        return;
    }
    
   
        for(int j=0;j<board[row].size();j++)
        {
            if(board[row][j]==0)
            {
                if(check(row,j))
                {
                    board[row][j]=1;

                    solve(row+1,0);

                    board[row][j]=0;
                }
            }   
                    
        }
        
    
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
    
    board.resize(n,vector<int>(n,0));
    
    solve(0,0);
    cout<<ans;
   
    return 0;
}