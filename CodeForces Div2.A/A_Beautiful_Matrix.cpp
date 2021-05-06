#include <bits/stdc++.h>
using namespace std;

int main()
{
    const int n = 5;
    int x, y,temp;
    int matrix[n+1][n+1];

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> matrix[i][j];
            if (matrix[i][j] == 1)
            {
                x = i;
                y = j;
                break;
            }
        }
    }
    x = abs(3 - x);
    y = abs(3 - y);
    cout << x + y;
    return 0;
}