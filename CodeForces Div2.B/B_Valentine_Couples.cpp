#include <bits/stdc++.h>
using namespace std;
const int lo = 1e8 + 10;
long long hsh[lo];
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long boy[n], girl[n];
        for (int i = 0; i < n; i++)
            cin >> boy[i];
        for (int i = 0; i < n; i++)
            cin >> girl[i];
        sort(boy, boy + n);
        sort(girl, girl + n, greater<int>());
        long long ans{0};
        for (int i = 0; i < n; i++)
            ans = max(ans,boy[i]+girl[i]);
        cout<<ans;
    }
    

    return 0;
}