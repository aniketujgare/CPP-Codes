#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, c;
    cin >> n >> c;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int maxDiff = INT_MIN;
    for (int i = 0; i < n - 1; i++)
    {
        int diff = arr[i] - arr[i + 1];
        if (diff > maxDiff)
            maxDiff = diff;
    }

    int ans =maxDiff - c;
    ans<=0?cout<<0:cout<<ans;
    return 0;
}