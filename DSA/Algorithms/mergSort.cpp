#include <bits/stdc++.h>
using namespace std;

void mergeArrays(int a[], int x[], int y[], int s, int e)
{
    int mid = (s + e) / 2;
    int i = s;       // Traversing x
    int j = mid + 1; // Traversing y
    int k = s;       // Traversing a

    while (i <= mid && j <= e)
    {
        if (x[i] < y[j])
            a[k++] = x[i++];
        else
            a[k++] = y[j++];
    }
    while (i <= mid)
        a[k++] = x[i++];

    while (j <= e)
        a[k++] = y[j++];
}

void mergSort(int a[], int s, int e)
{
    if (s >= e)
        return;
    int mid = (s + e) / 2;

    int x[100], y[100];

    for (int i = s; i <= mid; i++)
        x[i] = a[i];

    for (int i = mid + 1; i <= e; i++)
        y[i] = a[i];

    mergSort(x, s, mid);
    mergSort(y, mid + 1, e);
    mergeArrays(a, x, y, s, e);
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int start = 0, end = sizeof(a) / sizeof(a[0]) - 1;

    mergSort(a, start, end);

    for (int e : a)
        cout << e << " ";

    return 0;
}