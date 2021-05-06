#include <bits/stdc++.h>
using namespace std;
//modulo arithmatic
long long fastPower(long long a, long long b, int n)
{
    long long res = 1;
    while (b > 0)
    {
        if ((b & 1) != 0)
            res = (res * a % n) % n;
        // res = (res % n * a % n) % n;

        a = (a % n * a % n) % n;
        b = b >> 1;
    }
    return res;
}
int main()
{
    cout << fastPower(3978432, 5,1e9+7);
    return 0;
}