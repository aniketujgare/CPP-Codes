#include <bits/stdc++.h>
using namespace std;

void moorsVoting(int a[], int n)
{
    int cand = a[0];
    int count = 1;

    for (int i = 1; i < n; i++)
    {
        if (a[i] == cand)
            count++;

        else
        {
            count--;
            if (count == 0)
            {
                cand = a[i];
                count = 1;
            }
        }
    }
    cout << cand;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    moorsVoting(arr, n);

    return 0;
}