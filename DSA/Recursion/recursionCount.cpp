#include <bits/stdc++.h>
using namespace std;

int count(int n)
{
    //Base Case
    if (n == 0)
        return 0;

    // Recursive Case
    int smallAns = count(n / 10);

    // Calculation

    return smallAns + 1;
}

int main()
{
    int n;
    cin >> n;
    cout << count(n);

    return 0;
}