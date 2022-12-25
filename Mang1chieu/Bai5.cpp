#include <bits/stdc++.h>
#include <iostream>
#include <map>
using namespace std;

using ll = long long;
//int cnt[1000001];

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        //memset(cnt, 0, sizeof(cnt));
        map<int ,int >mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            //cnt[a[i]]++;
            mp[a[i]]++;
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            //if (cnt[a[i]] >= 2)
            if (mp[a[i]] >= 2)
                ++ans;
        }
        cout << ans << endl;
    }
    return 0;
}