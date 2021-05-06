#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;

    while (s <= e)
    {
        int mid = s + (e - s) / 2; 
        //Optimised for int over/under flow

        if (arr[mid] == key)
            return mid;

        else if (key > arr[mid])
            s = mid + 1;

        else
            e = mid - 1;
    }
    return -1;
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
    cout << binarySearch(arr, n, key);

    return 0;

} // O (log N)