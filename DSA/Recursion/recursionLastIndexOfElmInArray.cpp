#include <bits/stdc++.h>
using namespace std;

// Index of 1st occurence of elm in Array from back
int indexInArrBack(int a[], int n, int key, int i)
{
    if (i == -1)
        return -1;

    if (a[i] == key)
        return i;

    return indexInArrBack(a, n, key, i - 1);
}

// Index of 1st occurence of elm in Array from back without i
int indexInArrBack2(int a[], int n, int key)
{
    if (n == 0)
        return -1;

    if (a[n - 1] == key)
        return n - 1;

    return indexInArrBack2(a, n - 1, key);
}

// Start to end approach
int indexInArrBack3(int a[], int n, int key, int i=0)
{
    if (i == n)
        return -1;

    int indexInRem = indexInArrBack3(a, n, key, i+1);

    if (indexInRem == -1)
    {
        if(a[i]==key)
            return i;
        else return -1;
    }
    else return indexInRem;
    
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
    
    cout << indexInArrBack(arr, n, key,n);
    cout << indexInArrBack2(arr, n, key);
    cout << indexInArrBack3(arr, n, key);

    return 0;
}