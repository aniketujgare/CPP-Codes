#include <bits/stdc++.h>
using namespace std;
int mult(int m, int n)
{
    //Base Case
    if (n == 0)
        return 0;

    //Recursive Case
    int smallAns = mult(m, n - 1);

    //Calculation

    return smallAns + m;
}

int main()
{
    int m, n;
    cin >> m >> n;
    cout << mult(m, n);

    return 0;
}