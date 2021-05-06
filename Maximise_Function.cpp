#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int ptrx = 0, ptry = 1, ptrz = 2;
        int maxSum = 0;
        for (int z = 0; z < n; z++)
        {
            int sum = abs(arr[ptrx] - arr[ptry]) + abs(arr[ptry] - arr[ptrz]) + abs(arr[ptrz] - arr[ptrx]);
            maxSum = max(sum, maxSum);
            if (ptrz == n - 1)
                ptrz = 0;
            if (ptry == n - 1)
                ptry = 0;
            if (ptrx == n - 1)
                ptrx = 0;
            ptrx++;
            ptry++;
            ptrz++;
        }
        cout<<maxSum<<endl;
    }

    return 0;
}