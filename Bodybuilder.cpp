#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define vi vector<int>
#define pii pair<int, int>
#define rep(i, a, b) for (int i = (a); i < (b); i++)
#define endl "\n"
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, r;
        cin >> n >> r;
        long long work[n], tension[n];
        for (int i = 0; i < n; i++)
            cin >> work[i];
        for (int j = 0; j < n; j++)
            cin >> tension[j];

        long long x = tension[0];
        long long maxL = x;
        if (n == 1)
        {
            cout << x << endl;
        }
        else
        {
            for (int i = 1; i < n; i++)
            {
                long long rest = work[i] - work[i - 1];

                x -= rest * r;
                if (x < 0)
                    x = 0;
                x += tension[i];
                maxL = max(maxL, x);
            }

            cout << maxL << endl;
        }
    }

    return 0;
}