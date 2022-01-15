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
        int arr[11];
        for (int i = 1; i < 11; i++)
        {
            cin >> arr[i];
        }
        int team1(0), team2(0);
        for (int i = 1; i < 11; i++)
        {
            if (i % 2 == 0)
            {
                team2 += arr[i];
            }
            else
            {
                team1 += arr[i];
            }
        }
        if (team1 == team2)
            cout << 0 << endl;
        else if (team1 > team2)
            cout << 1 << endl;
        else
        {
            cout << 2 << endl;
        }
    }
    return 0;
}