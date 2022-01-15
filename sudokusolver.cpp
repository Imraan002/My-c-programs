#include <bits/stdc++.h>
using namespace std;
void disp(int board[9][9])
{
	for(int i=0;i<9;i++)
	{
		for(int j=0;j<9;j++)
		{
			cout<<board[i][j]<<" ";
		}
		cout<<endl;
	}
}
bool issafe(int board[9][9],int x,int y,int pos)
{
	for(int i=0;i<9;i++)
	{
		if(board[x][i]==pos)
			return false;
	}
	for(int i=0;i<9;i++)
	{
		if(board[i][y]==pos)
			return false;
	}
	int ci=x/3*3;
	int cj=y/3*3;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(board[ci+i][cj+j]==pos)
				return false;
		}
	}
	return true;
	
}
void sudoku(int board[9][9],int i,int j)
{	if(i==9 )
	{
		disp(board);
		return;
	}
	
	int ni=0;
	int nj=0;
	if(j==8)
	{
		nj=0;
		ni=i+1;
	}
	else
	{
		ni=i;
		nj=j+1;
	}
	if(board[i][j]!=0)
	{
		sudoku(board,ni,nj);
	}
	else
	{
		for(int pos=1;pos<=9;pos++)
		{
			if(issafe(board,i,j,pos)==true)
			{
				board[i][j]=pos;
				sudoku(board,ni,nj);
				board[i][j]=0;
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
int board[9][9]={
{3,0,6,5,0,8,4,0,0},
{5,2,0,0,0,0,0,0,0},
{0,8,7,0,0,0,0,3,1},
{0,0,3,0,1,0,0,8,0},
{9,0,0,8,6,3,0,0,5},
{0,5,0,0,9,0,6,0,0},
{1,3,0,0,0,0,2,5,0},
{0,0,0,0,0,0,0,7,4},
{0,0,5,2,0,6,3,0,0}
};
sudoku(board,0,0);

return 0;
}