#include <bits/stdc++.h>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
ofstream file("imraan.txt",ios::app);				//creating a file
string str;
getline(cin,str);								//writing to a file
file<<str;
file<<endl;
ifstream read("imraan.txt");
while(read)
{												//reading from a file
	string l;
	getline(read,l);
	cout<<l<<endl;
}

	

file.close();

return 0;
}