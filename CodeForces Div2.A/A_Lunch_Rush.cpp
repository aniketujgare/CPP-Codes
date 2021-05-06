#include <bits/stdc++.h>
using namespace std;

int main()
{
    //n~no of restaurants, k ~ time of lunch break
    int n, k;
    cin >> n >> k;

    int hotels[n];
    int f[n], t[n]; // f~happiness count, t~ eating time

    for (int i = 0; i < n; i++)
    {
        cin >> f[i];
        cin >> t[i];
    }

    int maxHappines = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        int happy;
        if (t[i] <= k)
            happy = f[i];
        else
            happy = f[i] - (t[i] - k); //fi - (ti - k)

        if (happy > maxHappines)
            maxHappines = happy;
    }
    cout << maxHappines;
    return 0;
}