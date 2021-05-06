#include <bits/stdc++.h>
using namespace std;

void count(int a[], int n, int key, int &ans, int i = 0)
{
    if (i == n)
        return;

    if (a[i] == key)
        ans++;

    count(a, n, key, ans, i + 1);
}

int count2(int a[], int n, int key, int i = 0)
{
    if (i == n)
        return 0;

    if (a[i] == key)
        return 1 + count2(a, n, key, i + 1);
    else
        return count2(a, n, key, i + 1);
}

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int key;
    cin >> key;

    {
        int ans = 0;
        count(arr, n, key, ans);
        cout << ans;
    }

    cout << count2(arr, n, key);

    return 0;
}