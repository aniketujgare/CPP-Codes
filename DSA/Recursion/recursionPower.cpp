#include <bits/stdc++.h>
using namespace std;

int power(int b, int i)
{
    // Base Case
    if (i == 0)
        return 1;

    // Recursive Case
    int smallAns = pow(b, i - 1);

    // Calculation
    return b * smallAns;
}

int main()
{
    int b, i; // Base and Index
    cin >> b >> i;
    int ans = power(b, i);
    cout << ans;
    
    return 0;
}