/*
https://www.hackerearth.com/problem/algorithm/doraemon-and-mii-chan/
*/
#include <bits/stdc++.h>
using namespace std;
const int n = 1e5 + 10;
long long hsh[n];
int main()
{
    int M, N;
    cin >> M >> N; //M ~ no of keys, N ~ total No of locked door
    while (M--)
    {
        int key, lock;
        cin >> key >> lock;
        hsh[lock] = 1;
    }
    for (int i = 0; i < N; i++)
    {
        int x;
        cin >> x;
        if (hsh[x] == 0)
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;

    return 0;
} 