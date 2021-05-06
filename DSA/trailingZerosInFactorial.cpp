#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, res = 0;
    cout << "Enter number:";
    cin >> n;
    for (int i = 5; i <= n; i = i * 5)
        res = res + n / i;
    cout << res << " Zeros";

    return 0;
}