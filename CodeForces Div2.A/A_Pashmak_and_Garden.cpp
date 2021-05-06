#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int x3, y3, x4, y4;

    /// coordinates cant form square isn't diagonal
    if (x1 != x2 && y1 != y2)
    {
        if (abs(x1 - x2) == abs(y1 - y2))
        {

            x3 = x2;
            y3 = y1;
            x4 = x1;
            y4 = y2;
        }
        else
        {
            // cout << "not square";
            cout << -1;
            return 0;
        }
    }
    else
    {
        // cout << "its square";
        if (x1 == x2)
        {
            x3 = x4 = x1 - (y1 - y2);
            y3 = y1;
            y4 = y2;
        }
        else if (y1 == y2)
        {
            y3 = y4 = y1 - (x1 - x2);
            x3 = x1;
            x4 = x2;
        }
    }

    cout << x3 << ' ' << y3 << ' ' << x4 << ' ' << y4;
    return 0;
}