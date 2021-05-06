#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s, n;
    cin >> s >> n;

    int x[n], y[n];
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
        cin >> y[i];
    }
    bool canFight = false;
    int fstDragonIndex;
    for (int i = 0; i < n; i++)
    {
        if (x[i] < s)
        {
            canFight = true;
            fstDragonIndex = i;
        }
    }
    if (!canFight)
    {
        cout << "NO";
        return 0;
    }
    s += y[fstDragonIndex];
    x[fstDragonIndex] = -1;
    int t = n - 1;
    while (t--)
    {

        int nextIndex = -1;

        for (int i = 0; i < n; i++)
        {
            if (s > x[i] && x[i] != -1)
            {
                nextIndex = i;
            }
        }
        if (nextIndex != -1)
        {
            s += y[nextIndex];
            x[nextIndex] = -1;
        }
        else
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}