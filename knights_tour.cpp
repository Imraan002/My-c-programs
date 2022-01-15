#include<bits/stdc++.h>
using namespace std;
#define ll long long
void display(vector<vector<int>>& chess) {
  for (int i = 0; i < chess.size(); i++) {
    for (int j = 0; j < chess.size(); j++) {
      cout << chess[i][j] << " ";
    }
    cout << endl;
  }
  cout << endl;
}

void printKnightsTour(vector<vector<int>>& chess, int n, int r, int c, int upcomingMove) {
  if(r<0 || r>=n || c<0 || c>=n || chess[r][c]!=0)
    return;
  else if(upcomingMove==n*n)
  {
    chess[r][c]=upcomingMove;
    display(chess);
    chess[r][c]=0;
    return;
  }

  chess[r][c]=upcomingMove;
  printKnightsTour(chess,n,r-2,c+1,upcomingMove+1);
  printKnightsTour(chess,n,r-1,c+2,upcomingMove+1);
  printKnightsTour(chess,n,r+1,c+2,upcomingMove+1);
  printKnightsTour(chess,n,r+2,c+1,upcomingMove+1);
  printKnightsTour(chess,n,r+2,c-1,upcomingMove+1);
  printKnightsTour(chess,n,r+1,c-2,upcomingMove+1);
  printKnightsTour(chess,n,r-1,c-2,upcomingMove+1);
  printKnightsTour(chess,n,r-2,c-1,upcomingMove+1);
  chess[r][c]=0;

}
int main()
{
    #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
    #endif
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  int n,row,col;
  cin>>n>>row>>col;
   vector<vector<int>> chess(n,vector<int>(n,1));
   printKnightsTour(chess,n,row,col,1);   
  return 0;
}