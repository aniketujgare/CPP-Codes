#include <bits/stdc++.h>
using namespace std;

int countZeros(int n)
{
    // Base Case
    if (n == 0)
        return 0;

    // Recursion
    int smallAns = countZeros(n / 10);

    // Calculation
    int lastDigit = n % 10;

    if (lastDigit == 0)
        return 1 + smallAns;
    else
        return smallAns;
}

int main()
{
    int n;
    cin >> n;
    cout << countZeros(n);

    return 0;
}