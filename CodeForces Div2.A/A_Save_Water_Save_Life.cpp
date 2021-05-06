#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int H, x, y, C;
        cin >> H >> x >> y >> C;

        int con = x + y / 2;
        int ans = con * H;
        if (ans <= C)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}