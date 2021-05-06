#include <bits/stdc++.h>
using namespace std;

void print(int n)
{
    // Base Case
    if (n == 0)
        return;

    // Recursive Case
    print(n - 1);

    // Calculation
    cout << n << " ";
}

void printDec(int n)
{
    // Base Case
    if (n == 0)
        return;

    cout << n << " ";

    // Recursive Case
    printDec(n - 1);
}

int main()
{
    int n;
    cin >> n;
    print(n);
    cout << endl;
    printDec(n);

    return 0;
}