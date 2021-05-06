#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int sum = 0;
    int sumTill = 0;
    int n, k;
    string s;
    while (t--)
    {
        cin >> n >> k;
        cin >> s;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '*')
            {
                sum++;
            }
            else
            {
                if (sum > sumTill)
                    sumTill = sum;
                sum = 0;
            }
        }
        if (sum > sumTill)
            sumTill = sum;
        // cout<<sumTill;
        sumTill >= k ? cout << "YES" << endl : cout << "NO" << endl;
        sum = 0;
        sumTill = 0;
    }

    return 0;
}