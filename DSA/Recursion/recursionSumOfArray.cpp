#include <bits/stdc++.h>
using namespace std;

//Recursion from front side of Array
int sumOfArray(int a[], int n)
{
    if (n == 0)
        return 0;

    int smallAns = sumOfArray(a + 1, n - 1);
    return a[0] + smallAns;
}

//Recursion from back side of Array
int sumOfArray2(int a[], int n)
{
    if (n == 0)
        return 0;

    int smallAns = sumOfArray(a, n - 1);
    return a[n - 1] + smallAns;
}

// Passing Array with index
int sumOfArray3(int a[], int n, int i)
{
    if (i == n)
        return 0;

    int smallAns = sumOfArray3(a, n, i + 1);
    return a[i] + smallAns;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
  
    for (int &e : arr)
        cin >> e;
    //cout << sumOfArray2(arr, n);
    cout << sumOfArray3(arr, n, 0);
    return 0;
}