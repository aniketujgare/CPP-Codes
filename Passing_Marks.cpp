#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a[2], b[2], c[2];
        cin >> a[0] >> b[0] >> c[0];
        int Total;
        cin >> Total;
        cin >> a[1] >> b[1] >> c[1];

        if (a[1] >= a[0])
        {
            if (b[1] >= b[0])
            {
                if (c[1] >= c[0])
                {
                    if (a[1] + b[1] + c[1] >= Total)
                        cout << "YES" << endl;
                    else
                        cout << "NO" << endl;
                }
                else
                    cout << "NO" << endl;
            }
            else
                cout << "NO" << endl;
        }
        else
            cout << "NO" << endl;
    }

    return 0;
}