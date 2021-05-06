#include <bits/stdc++.h>
using namespace std;

int fibonaci(int n)
{
    //Base case
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    //Recursive Case
    int smallOutput1 = fibonaci(n - 1);
    int smallOutput2 = fibonaci(n - 2);

    //Calculation
    return smallOutput1 + smallOutput2;
}

int main()
{
    int n;
    cin >> n;
    int ans = fibonaci(n);
    cout << ans << endl;

    return 0;
}