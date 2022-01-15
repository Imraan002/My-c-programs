#include <bits/stdc++.h>
using namespace std;
map<int,vector<int>> to_discharge;
set<int> vacant_centres;
void discharge_patients(int day)
{
	for(auto it=to_discharge.begin();it!=to_discharge.end();it++)
	{
		int discharge_day=it->first;
		auto &centres=it->second;
		if(day<discharge_day)
			break;
		for(auto k:centres)
		{
			vacant_centres.insert(k);
		}
		to_discharge.erase(it);
	}
}
int find_centre(int idx,int m)
{
	auto it=vacant_centres.lower_bound(idx%m);
	if(it==vacant_centres.end())
	{
		it=vacant_centres.begin();
	}
	return *it;
}
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
int n,m;
cin>>n>>m;
vector<pair<int,int>> timings(n);
vector<int> ans(m,0);
for(int i=0;i<n;i++)
{
	cin>>timings[i].first;
}
for(int i=0;i<n;i++)
{
	cin>>timings[i].second;
}
sort(timings.begin(),timings.end());
for(int i=0;i<m;i++)
{
	vacant_centres.insert(i);
}
for(auto &timing:timings)
{
	int arrival_day=timing.first;
	int treatment=timing.second;
	discharge_patients(arrival_day);
	if(vacant_centres.size()==0)
		continue;
	int patient_index=&timing-&timings[0];
	int got_centre=find_centre(patient_index,m);
	to_discharge[arrival_day+treatment].push_back(got_centre);
	ans[got_centre]++;
	vacant_centres.erase(got_centre);
}

for(int i=0;i<m;i++)
{
	cout<<ans[i]<<" ";
}
return 0;
}