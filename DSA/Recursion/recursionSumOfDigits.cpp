#include <bits/stdc++.h>
using namespace std;

int sumOfDigit(int n)
{
    //Base Case
    if (n == 0)
        return 0;

    //Recursive Case
    int smallAns = sumOfDigit(n / 10);

    //Calculation

    return smallAns + n % 10;
}

int main()
{
    int n;
    cin >> n;
    cout << sumOfDigit(n);

    return 0;
}