#include <bits/stdc++.h>
using namespace std;
int linearSearch(int arr[], int n, int key);
int binarySearch(int arr[], int end, int key);

int main()
{
    cout << "How many elements you want to Store ?" << endl;
    int n;
    cin >> n;
    int arr[n]; 
    cout << "Enter those " << n << " elements" << endl;
    for (int i = 0; i < n; i++) cin >> arr[i];
    cout << "Enter element to search" << endl;
    int key;
    cin >> key;
    cout << endl << "~~Executing Linear Search~~" << endl;
    int ans = linearSearch(arr, n, key);
    if (ans == -1) cout << "Element not present" << endl;
    else cout << "Element present at index: " << ans << endl;

    cout << endl<< "~~Executing Binary Search~~" << endl;
    cout << "Sorting your elements in ascending order" << endl;
    sort(arr, arr + n);
    ans = binarySearch(arr, n, key);

    if (ans == -1) cout << "Element not present" << endl;
    else cout << "Element present at index: " << ans << " in sorted array" << endl;

    cout<<endl;

    return 0;
}

int linearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
        if (arr[i] == key)
            return i;
    return -1;
}
int binarySearch(int arr[], int end, int key)
{
    int start = 0;
    end = end--;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (key == arr[mid])
            return mid;
        else if (key < arr[mid])
            end = mid - 1;
        else
            start = mid + 1;
    }
    return -1;
}