#include <bits/stdc++.h>
#include <numeric>
using namespace std;
long long gcd(long long a, long long b)
{
    while (b)
        b ^= a ^= b ^= a %= b;
    return a;
}
int main()
{
    // cout<<gcd(900000000000000010,900000000000000012);return 0;
    long long l, r;
    cin >> l >> r;
    long long a, b, c;

    if ((l & 1)) //if l is odd a=l+1
        l += 1;

    if (r - l < 2) // r < b or c
    {
        cout << -1;
        return 0;
    }

    a = l;
    b = a + 1;
    c = b + 1;

    cout << a << ' ' << b << ' ' << c;

    return 0;
}