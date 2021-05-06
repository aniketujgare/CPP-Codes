#include <bits/stdc++.h>
using namespace std;

//check first 2 elm. then recursion on smaller array
bool isSorted(int a[], int n)
{
    if (n == 0 || n == 1)
        return true;

    if (a[0] > a[1])
        return false;

    bool isSmallerSorted = isSorted(a + 1, n - 1);

    return isSmallerSorted;
}

//call recursion on smaller array then check first 2 elm.
bool isSorted2(int a[], int n)
{
    if (n == 0 || n == 1)
        return true;

    bool isSmallerSorted = isSorted(a + 1, n - 1);

    if (!isSmallerSorted)
        return false;

    return (a[0] < a[1]);
}

//compare last 2 elm. and call recursion on array (n-1)
bool isSorted3(int a[], int n)
{
    if (n == 0 || n == 1)
        return true;

    if (a[n - 2] > a[n - 1])
        return false;

    bool isSmallerSorted = isSorted(a, n - 1);

    return isSmallerSorted;
}

int main()
{
    int n;
    cin >> n;
    int a[n];

    for (int &e : a)
        cin >> e;

    isSorted(a, n) ? cout << "Sorted" : cout << "Not Sorted";
    //isSorted2(a, n) ? cout << "Sorted" : cout << "Not Sorted";
    //isSorted3(a, n) ? cout << "Sorted" : cout << "Not Sorted";
    
    return 0;
}