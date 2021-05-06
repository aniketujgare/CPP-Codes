#include <bits/stdc++.h>
using namespace std;

// Index of 1st occurence of elm in Array from front
int indexInArr(int a[], int n, int key, int i = 0)
{
    if (i == n)
        return -1;

    if (a[i] == key)
        return i;

    return indexInArr(a, n, key, i + 1);
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
    cout << indexInArr(arr, n, key);

    return 0;
}