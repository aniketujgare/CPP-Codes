#include <bits/stdc++.h>
using namespace std;

double GSum(int n)
{
    // Base Case
    if (n == 0)
        return 1;

    // Recursive Case
    double smallAns = GSum(n - 1);

    // Calculation
    return 1 / pow(2, n) + smallAns;
}

int main()
{
    int n;
    cin >> n;
    cout << GSum(n);

    return 0;
}