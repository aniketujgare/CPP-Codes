#include <bits/stdc++.h>
using namespace std;

// Check 1st elm then recurse Array
bool isPresent(int a[], int n, int key)
{
    if (n == 0)
        return false;

    if (a[0] == key)
        return true;

    bool smallAns = isPresent(a + 1, n - 1, key);

    return smallAns;
}

// First recurse samll Array then check 1st elm.
bool isPresent2(int a[], int n, int key)
{
    if (n == 0)
        return false;

    bool remArray = isPresent2(a + 1, n - 1, key);

    if (remArray)
        return true;
    else
        return (a[0] == key);
}

//Check last elm. then recurse Array from Back
bool isPresent3(int a[], int n, int key)
{
    if (n == 0)
        return false;

    if (a[n - 1] == key)
        return true;

    bool remArray = isPresent3(a, n - 1, key);

    return remArray;
}

//Checking with index approach
bool isPresent4(int a[], int n, int key, int i)
{
    if (i == n)
        return false;

    if (a[i] == key)
        return true;

    bool remArray = isPresent4(a, n, key, i + 1);

    return remArray;
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
    isPresent3(arr, n, key) ? cout << "Present" : cout << "Not Present";
    //isPresent4(arr, n, key, 0) ? cout << "Present" : cout << "Not Present";

    return 0;
}