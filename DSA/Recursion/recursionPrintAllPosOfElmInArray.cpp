#include <bits/stdc++.h>
using namespace std;

void printAllPos(int a[], int n, int key, int i = 0)
{
    if (i == n)
        return;
    if (a[i] == key)
        cout << i << " ";

    printAllPos(a, n, key, i + 1);
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

    printAllPos(arr, n, key);

    return 0;
}