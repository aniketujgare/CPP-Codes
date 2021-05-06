#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    // You can assume that number a is closer to number x than number b, if |a - x| < |b - x|.
    int x; // perk of dice;
    int won{0}, draw{0}, lose{0};
    for (int i = 1; i <= 6; i++)
    {
        x = i;
        if (abs(a - x) < abs(b - x))
            won++;
        else if (abs(a - x) == abs(b - x))
            draw++;
        else
            lose++;
    }
    cout << won << ' ' << draw << ' ' << lose;
    return 0;
}