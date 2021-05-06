#include <bits/stdc++.h>
using namespace std;

int a[101];
int main()
{
    int n,x;
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        cin>>x;
        a[x] =i;
    }
    for (int i = 1; i <= n; i++)
    {
        cout<<a[i]<<" ";
    }
    
    return 0;
}