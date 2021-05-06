#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int host[n];
    int guest[n];
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> host[i];
        cin >> guest[i];
    }
    int cnt = 0;
    for(int h:host)
    {
        for(int g:guest)
        {
            if(h==g)
            {
                cnt++;
            }
        }
    }
    cout<<cnt;
    return 0;
}