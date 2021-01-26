//https://www.codechef.com/JAN21C/problems/FAIRELCT
#include <bits/stdc++.h>
using namespace std;
const int N = 1010;
const int M = 1010;

int main()
{
    int t;
    cin >> t;
    int n, m, a[N], b[M];
    for (int j = 0; j < t; j++)
    {
        cin >> n >> m;

        int sum_a = 0;
        int sum_b = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum_a += a[i];
        }

        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
            sum_b += b[i];
        }
        int ans = 0;
        while (sum_a <= sum_b)
        {
            int min_a = INT_MAX, loc_a = -1;
            int max_b = INT_MIN, loc_b = -1;

            for (int i = 0; i < n; i++)
            {
                if (a[i] < min_a)
                {
                    min_a = a[i];
                    loc_a = i;
                }
            }

            for (int i = 0; i < m; i++)
            {
                if (b[i] > max_b)
                {
                    max_b = b[i];
                    loc_b = i;
                }
            }

            if (min_a >= max_b)
            {
                ans = -1;
                break;
            }
            ans++;

            swap(a[loc_a], b[loc_b]);

            sum_a -= min_a;
            sum_a += max_b;

            sum_b += min_a;
            sum_b -= max_b;
        }
        cout << ans << endl;
    }
    return 0;
}