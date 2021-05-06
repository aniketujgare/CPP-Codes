/*
https://www.hackerearth.com/problem/algorithm/vaccination-time/
*/
#include <bits/stdc++.h>
using namespace std;

int const n = 1e3 + 10;
long long pf[n][n];

int main()
{
    int M, N;
    cin >> M >> N;
    for (int i = 1; i <= M; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            int x;
            cin>>x;
            if (!(x & 1))
                pf[i][j] = 0;
            else pf[i][j] = 1;
            pf[i][j] = pf[i][j] + pf[i - 1][j] + pf[i][j - 1] - pf[i - 1][j - 1];
        }
    }


    int Q;
    cin >> Q;
    while (Q--)
    {
        int l1, r1, l2, r2; //a,b,c,d
        cin >> l1 >> r1 >> l2 >> r2;
        cout << pf[l2][r2] - pf[l1-1][r2] - pf[l2][r1-1] + pf[l1-1][r1-1]<<endl;
    }

    return 0;
}