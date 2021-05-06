#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int a[t];
    for (int i = 0; i < t; i++)
    {
        cin>>a[i];
    }
    int q;cin>> q;
    while (q--)
    {
        int x,k;
        cin>>x>>k;
        int cnt=k;
        for (int i = x-1; i < t; i++)
        {
            if(a[i]!=0)
            cnt = cnt - a[i];
            if(cnt>0)
            a[i]==0;
        }
        cout<<cnt;
    }
    
    
    
    return 0;
}