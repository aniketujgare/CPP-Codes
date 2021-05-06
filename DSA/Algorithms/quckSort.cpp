#include <bits/stdc++.h>
using namespace std;

int partition(int a[], int s, int e)
{
    int pivot = 0;
    for (int i = 0; i < e; i++)
        if (a[i] < a[e])
            pivot++;

    swap(a[pivot], a[e]);
    int i = s, j = e;
    while (i < pivot && j > pivot)
    {
        if (a[i++] < a[j--])
            swap(a[i], a[j]);
        else
            i++;
    }
    return pivot;
}

int partitionAlt(int a[], int s, int e)
{
    int i = s;
    int pivot = a[e];
    for (int j = s; j < e; j++)
    {
        if (a[j] < pivot)
            swap(a[i++], a[j]);
    }
    swap(a[i], a[e]);
    return i;
}

void quickSort(int a[], int s, int e)
{
    if (s >= e)
        return;

    int p = partition(a, s, e);
    quickSort(a, s, p - 1);
    quickSort(a, p + 1, e);
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int start = 0;
    int end = sizeof(arr) / sizeof(arr[0]) - 1;

    quickSort(arr, start, end);

    for (int e : arr)
        cout << e << " ";

    return 0;
}