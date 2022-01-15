#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int width, height;
        cin >> width >> height;
        int hr1;
        cin >> hr1;
        int hr1_min(INT_MAX);
        int hr1_max(INT_MIN);
        for (int i = 0; i < hr1; i++)
        {
            int k;
            cin >> k;
            hr1_max = max(hr1_max, k);
            hr1_min = min(hr1_min, k);
        }
          int hr2;
        cin>>hr2;
        int hr2_min=INT_MAX;
        int hr2_max=INT_MIN;
        for(int i=0;i<hr2;i++)
        {
            int k;
            cin>>k;
            hr2_max=max(hr2_max,k);
            hr2_min=min(hr2_min,k);
        }
        int vr1;
        cin>>vr1;
        int vr1_min=INT_MAX;
        int vr1_max=INT_MIN;
        for(int i=0;i<vr1;i++)
        {
            int k;
            cin>>k;
            vr1_max=max(vr1_max,k);
            vr1_min=min(vr1_min,k);
        }
        int vr2;
        cin>>vr2;
        int vr2_min=INT_MAX;
        int vr2_max=INT_MIN;
        for(int i=0;i<vr2;i++)
        {
            int k;
            cin>>k;
            vr2_max=max(vr2_max,k);
            vr2_min=min(vr2_min,k);
        }
        int area_hr1=abs(hr1_max-hr1_min)*height;
        int area_hr2=abs(hr2_max-hr2_min)*height;
        int area_vr1=abs(vr1_max-vr1_min)*width;
        int area_vr2=abs(vr2_max-vr2_min)*width;
        cout<<max(max(area_hr1,area_hr2),max(area_vr1,area_vr2))<<"\n";
    }
    return 0;
}