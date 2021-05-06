#include <bits/stdc++.h>
using namespace std;

int noOfWays(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else if (n < 0)
        return 0;

    return noOfWays(n - 1) + noOfWays(n - 2) + noOfWays(n - 3);
}

int main()
{
    int n;
    cin >> n;

    cout << noOfWays(n);

    return 0;
}