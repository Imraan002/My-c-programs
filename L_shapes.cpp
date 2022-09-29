#include<bits/stdc++.h>
using namespace std;
#define int long long

int row,col;

int arr[60][60];

int visited[60][60];

int island_cnt;
int dfs(int i,int j)
{
    if(i<0 || i>=row || j<0 || j>=col)
        return 0;

    if(arr[i][j]==0 || visited[i][j]==1)
        return 0;
    

    visited[i][j]=1;

    int island_size=1;

    int dx[8]={1,-1,0,0,-1,-1,1,1};
    int dy[8]={0,0,1,-1,-1,1,-1,1};

    for(int t=0;t<8;t++)
    {
        int x = i+dx[t];
        int y = j+dy[t];

        island_size+=dfs(x,y);
    }

    if(island_size==3)
        island_cnt++;

    return island_size;

}
void solve()
{
    island_cnt=0;

    memset(visited,0,sizeof(visited));

    cin>>row>>col;

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            char ch;
            cin>>ch;
            if(ch=='.')
                arr[i][j]=0;
            else
                arr[i][j]=1;
        }
    }

    int elbow_cnt=0;

    bool ans=true;

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if( arr[i][j]==1 && !visited[i][j] )
            {
                
                if(dfs(i,j)!=3)
                {
                    ans=false;
                    break;
                }
                
            }
        }
    }

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(arr[i][j]==1)
            {
                if(i-1>=0 && j+1<col && arr[i-1][j]==1 && arr[i][j+1]==1)
                    elbow_cnt++;
                if(j-1>=0 && i-1>=0 && arr[i][j-1]==1 && arr[i-1][j]==1)
                    elbow_cnt++;
                if(j+1<col && i+1<row && arr[i][j+1]==1 && arr[i+1][j]==1)
                    elbow_cnt++;
                if(j-1>=0 && i+1<row && arr[i][j-1]==1 && arr[i+1][j]==1)
                    elbow_cnt++;
            }
        }
    }

    if(island_cnt!=elbow_cnt)
        ans=false;

    if(ans)
        cout<<"Yes\n";
    else
        cout<<"No\n";

}

signed main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int t;
    cin >> t;


    while(t--)
    {
        solve();
    }
    return 0;
}