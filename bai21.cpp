#include <bits/stdc++.h>
using namespace std;
void sxt(int a[], int n)
{
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            if (a[j] < a[i])
            {
                int tam = a[i];
                a[i] = a[j];
                a[j] = tam;
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    sxt(a, n);
    for (int i = 0; i < n; ++i)
        if (a[i] % 2 == 0)
            cout << a[i] << " ";
    for (int i = n - 1; i >= 0; i--)
        if (a[i] % 2)
            cout << a[i] << " ";
    return 0;
}