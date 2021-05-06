#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int arr[] = {4, 2, 3, 4, 3};
    int arr[] = {7, 8, 1, 2, 2, 5, 5, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int count = 0;
    for (size_t i = 0; i < size - 1; i++)
    {
        if (arr[i] == arr[i + 1])
            count++;
    }
    cout << size - count;
    return 0;
}