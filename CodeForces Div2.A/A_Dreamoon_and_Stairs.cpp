#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    if (m > n)
    {
        cout << -1;
        return 0;
    }
    int NoOf2Steps = n / 2;

    while (NoOf2Steps >= 0)
    {
        int ans = NoOf2Steps + (n - 2 * NoOf2Steps);

        if (ans % m != 0) //is noOfsteps is multiple of m
        {
            NoOf2Steps -= 1; //if not decrease 1
        }
        else
        {
            cout << ans;
            return 0;
        }
    }
    cout << -1;
    return 0;
}