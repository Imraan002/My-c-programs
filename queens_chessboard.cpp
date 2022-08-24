#include<bits/stdc++.h>
using namespace std;
#define ll long long

int ans=0;
bool check(char arr[8][8],int row,int col)
    {
        for(int i=0;i<8;i++)
        {
            if(arr[i][col]=='Q')
                return false;
        }
        for(int i=0;i<8;i++)
        {
            if(arr[row][i]=='Q')
                return false;
        }
        int trow=row;
        int tcol=col;
        while(trow>=0 && tcol>=0)
        {
            if(arr[trow][tcol]=='Q')
                return false;
            trow--;
            tcol--;
        }
        while(row>=0 && col<8)
        {
            if(arr[row][col]=='Q')
                return false;
            row--;
            col++;
        }
    return true;
    }
void solve(char arr[8][8],int row,int col)
{
    
    
    if(row==8 )
    {
        ans+=1;
        return;
    }
    
   
        for(int j=0;j<8;j++)
        {
            if(arr[row][j]=='.')
            {
                if(check(arr,row,j))
                {
                    arr[row][j]='Q';

                    solve(arr,row+1,0);

                    arr[row][j]='.';
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
    
    char arr[8][8];

    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            cin>>arr[i][j];
        }
    }
    
    solve(arr,0,0);
    cout<<ans;
    return 0;
}