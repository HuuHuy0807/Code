#include <iostream>
#include "bits/stdc++.h"

using namespace std;

int main()
{
    int n, a[1001], kq = 0, k = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + n + 1);
    for (int i = n; i >= 1; i--)
        if (k < a[i])
        {
            kq = kq + a[i] - k;
            k++;
        }
    cout << kq;
}