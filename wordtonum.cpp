#include <bits/stdc++.h>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
cout<<"Please provide a space at first"<<endl;
string str=" three hundred thirty";
vector<char> temp;
int res=0;
int i;
for( i=str.size()-1;!isspace(str[i]);i--)
{
	temp.push_back(str[i]);
}
reverse(temp.begin(),temp.end());
string ans(temp.begin(),temp.end());
if(ans=="zero")
	res=0;
else if(ans=="one")
	res=1;
else if(ans=="two")
	res=2;
else if(ans=="three")
	res=3;
else if(ans=="four")
	res=4;
else if(ans=="five")
	res=5;
else if(ans=="six")
	res=6;
else if(ans=="seven")
	res=7;
else if(ans=="eight")
	res=8;
else if(ans=="nine")
	res=9;
else if(ans=="ten")
	res=10;
else if(ans=="eleven")
	res=11;
else if(ans=="twelve")
	res=12;
else if(ans=="thirteen")
	res=13;
else if(ans=="fourteen")
	res=14;
else if(ans=="fifteen")
	res=15;
else if(ans=="sixteen")
	res=16;
else if(ans=="seventeen")
	res=17;
else if(ans=="eighteen")
	res=18;
else if(ans=="nineteen")
	res=19;
else if(ans=="twenty")
	res=20;
else if(ans=="thirty")
	res=30;
else if(ans=="forty")
	res=40;
else if(ans=="fifty")
	res=50;
else if(ans=="sixty")
	res=60;
else if(ans=="seventy")
	res=70;
else if(ans=="eighty")
	res=80;
else if(ans=="ninety")
	res=90;
else
	res=res+0;
temp.clear();	
i--;
while(!isspace(str[i]))
{
	temp.push_back(str[i]);
	i--;
}
reverse(temp.begin(),temp.end());
 string ans2(temp.begin(),temp.end());
 if(ans2=="twenty")
 	res=20+res;
 else if(ans2=="thirty")
 	res=30+res;
 else if(ans2=="forty")
 	res=40+res;
 else if(ans2=="fifty")
 	res=50+res;
 else if(ans2=="sixty")
 	res=60+res;
 else if(ans2=="seventy")
 	res=70+res;
 else if(ans2=="eighty")
 	res=80+res;
 else if(ans2=="ninety")
 	res=90+res;
 else
 	res=res+0;
 temp.clear();
 i--;
 while(!isspace(str[i]))
 {

 	temp.push_back(str[i]);
 	i--;
 }
 i--;
 while(!isspace(str[i]))
 {

 	temp.push_back(str[i]);
 	i--;
 }
reverse(temp.begin(),temp.end());
string ans3(temp.begin(),temp.end());
 if(ans3=="onehundred")
 	res=100+res;
else if(ans3=="twohundred")
	res=200+res;
else if(ans3=="threehundred")
	res=300+res;
else if(ans3=="fourhundred")
	res=400+res;
else if(ans3=="fivehundred")
	res=500+res;
else if(ans3=="sixhundred")
	res=600+res;
else if(ans3=="sevenhundred")
	res=700+res;
else if(ans3=="eighthundred")
	res=800+res;
else if(ans3=="ninehundred")
	res=900+res;
else
	res=res+0;
cout<<res;
return 0;
}