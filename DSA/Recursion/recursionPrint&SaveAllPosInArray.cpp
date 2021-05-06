#include <bits/stdc++.h>
using namespace std;

void saveAllPos(int a[], int n, int key, vector<int> &ans, int i = 0)
{
    if (i == n)
        return;

    if (a[i] == key)
        ans.push_back(i);

    return saveAllPos(a, n, key, ans, i + 1);
}

int saveAllPosUsingArray(int a[], int n, int key, int out[], int j = 0, int i = 0)
{
    if (i == n)
        return 0;

    if (a[i] == key)
    {
        out[j] = i;
        return 1 + saveAllPosUsingArray(a, n, key, out, j + 1, i + 1);
    }
    return 0 + saveAllPosUsingArray(a, n, key, out, j, i + 1);
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

    { // saveAllPos
        vector<int> v;

        saveAllPos(arr, n, key, v);

        for (int e : v)
        cout << e << " ";
    }
    
    // saveAllPosUsingArray
    int output[n];

    int count = saveAllPosUsingArray(arr, n, key, output);

    for (int i = 0; i < count; i++)
        cout << output[i] << " ";

    return 0;
}