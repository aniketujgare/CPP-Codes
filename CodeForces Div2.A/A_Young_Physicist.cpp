#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int x[n], y[n], z[n];

    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
        cin >> y[i];
        cin >> z[i];
    }
    for (int i = 1; i < n; i++)
    {
        x[i] = x[i] + x[i - 1];
        y[i] = y[i] + y[i - 1];
        z[i] = z[i] + z[i - 1];
    }
    (x[n - 1] == 0 && y[n - 1] == 0 && z[n - 1] == 0) ? cout << "YES" : cout << "NO";

    return 0;
}