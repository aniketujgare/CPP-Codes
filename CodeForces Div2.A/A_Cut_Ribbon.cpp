#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b, c;
    cin >> n >> a >> b >> c;

    int arr[3] = {a, b, c};
    sort(arr, arr + 3, greater<int>());

    if (n % arr[2] == 0)
    {
        cout << n / arr[2];
        return 0;
    }
    int rem = n % arr[2];
    int quo = n / arr[2];
    // cout<<rem<<" "<<quo<<endl;
    if (rem != arr[0] || rem != arr[1])
    {
        while (rem != arr[0] && rem != arr[1])
        {
            rem = rem + arr[2];
            quo--;
        }
        cout << quo + 1;
    }

    return 0;
}