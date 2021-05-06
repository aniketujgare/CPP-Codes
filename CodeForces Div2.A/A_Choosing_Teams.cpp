#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        arr[i] = arr[i] + k;
    }
    int members{0};
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= 5)
            members++;
    }
    cout << members / 3;

    return 0;
}