#include <bits/stdc++.h>
using namespace std;
int hsh[101];
int main()
{
    int n;
    cin >> n;
    int evenCnt {0}, oddCnt{0};
    int evenInx, oddInx;
    for (int i = 1; i <= n; i++)
    {    
        int x;cin>>x;
        if (x%2==0)
        {
            evenCnt++;
            evenInx =i;
        }
        else
        {
            oddCnt++;
            oddInx = i;
        }
    }
    if(evenCnt==1)
    cout<<evenInx;
    else cout<<oddInx;
    return 0;
}