#include <bits/stdc++.h>
using namespace std;
int hsh[256];
int main()
{
    int n;
    cin >> n;

    char arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
            hsh[arr[i][j] - 'a']++;
        }
    }
    bool isDiagonal = true;
    char diaEle = arr[0][0];
    int c1 = 0, c2 = n - 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[c1][i] != diaEle)
        {
            isDiagonal = false;
        }
        if (arr[c2][i] != diaEle)
        {
            isDiagonal = false;
        }
        c1++;
        c2--;
    }
    if (!isDiagonal || hsh[diaEle - 'a'] != (2 * n - 1))
    {
        cout << "NO";
        return 0;
    }
    hsh[diaEle - 'a'] = 0;
    int distinctElement{0};
    for (int a : hsh)
    {
        if (a != 0)
            distinctElement++;
    }
    distinctElement == 1 ? cout << "YES" : cout << "NO";
    return 0;
}