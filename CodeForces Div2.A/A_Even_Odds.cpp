#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;

    long long mid = n / 2;
    if (n % 2 == 1)
        mid++;

    if (k <= mid)
        cout << (2 * k - 1);
    else
        cout << ((k - mid) * 2);
    return 0;
}