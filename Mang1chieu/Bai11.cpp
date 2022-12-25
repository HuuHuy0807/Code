#include <iostream>
#include <cmath>
#include <map>
using namespace std;

const int maxn = 1000;
int a[maxn];
map<int, int >mp;

void solve(int n)
{
    for (int i =1; i <= sqrt(n); i++)
    {
        if (n% i ==0)
        {
            mp[i]++;
            if(i != n/i)
            mp[n/i]++;
        }
    }
}
int main()
{
    int t ; 
    cin >> t;
    while (t--)
    {
        int n; cin >> n;
        for (int  i = 0; i < n; i++)
        {
            cin >> a[i];
            solve(a[i]);
        }
        int res = 1;
        for(auto it:mp)
        {
            if (it.second >=2)
                res = it.first;
        }
        cout << res << endl;
    }
    return 1;
}