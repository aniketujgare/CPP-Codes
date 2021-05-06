#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, m;
    cin >> n >> m;
    long long arr[m];
    for (long long i = 0; i < m; i++)
        cin >> arr[i];

    long long cnt = arr[0] - 1;
    for (long long i = 1; i < m; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            cnt += n - arr[i - 1];
            cnt += arr[i];
        }
        else if (arr[i] == arr[i - 1])
            continue;
        else
            cnt += arr[i] - arr[i - 1];
    }
    cout << cnt;
    return 0;
}