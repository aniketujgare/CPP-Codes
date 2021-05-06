#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int k = log2(n);

        long long a = 1 << k;
        long long b = a - 1;

        int count = 0;

        while (n)
        {
            if ((n & 1) == 0)
            {
                a = a ^ (1 << count);
                count++;
                n = n >> 1;
            }
            else
            {
                count++;
                n = n >> 1;
            }
        }
        cout << (a * b) << endl;
    }

    return 0;
}