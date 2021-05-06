#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    int players[m + 1];
    for (int i = 0; i < m + 1; i++)
        cin >> players[i];

    int setBitIndex[m + 1];
    for (int j = 0; j < m + 1; j++)
    {
        int num = players[j];
        int bitNo{-1};
        int testbit = 1;
        for (int i = 0; i < 32; i++)
        {
            if (num & testbit)
            {
                bitNo = i;
                break;
            }
            testbit = testbit << 1;
        }
        if (bitNo)
            setBitIndex[j] = bitNo;
        else
            setBitIndex[j] = 0;
    }
    for (int a : setBitIndex)
        cout << a << ' ';
        cout<<endl;
    int cnt{0};
    int fedor = setBitIndex[m];
    for (int i = 0; i < m; i++)
    {
        if (abs(setBitIndex[m] - setBitIndex[i]) <= k && abs(setBitIndex[m] - setBitIndex[i]) >0)
        {
            cout<<setBitIndex[m]<<' '<<setBitIndex[i]<<endl;
            cnt++;
        }
    }
    cout << cnt;

    return 0;
}