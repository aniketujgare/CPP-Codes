#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    char a[n][m];
    for (int i = 0; i < n; i += 2)
    {
        for (int j = 0; j < m; j++)
        {
            a[i][j] = '#';
        }
    }
    bool isRight = true;
    for (int i = 1; i < n - 1; i += 2)
    {
        if (isRight)
        {
            for (int j = 0; j < m - 1; j++)
            {
                a[i][j] = '.';
            }
            a[i][m - 1] = '#';
            isRight = false;
        }
        else
        {
            a[i][0] = '#';
            for (int j = 1; j < m; j++)
            {
                a[i][j] = '.';
            }

            isRight = true;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << a[i][j];
        }
        cout << endl;
    }

    return 0;
}