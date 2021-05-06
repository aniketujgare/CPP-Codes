#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = (a); i < (b); i++)

using namespace std;

int main()
{
    int n; cin>>n;
    int arr[n];
    rep(i,0,n) cin>>arr[i];
    if(n==1) cout<<1<<' '<<1;

    bool incr = (arr[1]>arr[0]) ? true: false;
    
    if(incr)
    {   
        int i = 1;
        for (i ; i < n-1; i++)
           if(arr[i]<arr[i-1])
                break;
        if(i==n-1) cout<<"yes"<<endl<<1<<' '<<1;
        
    }
    else
    {
        int i = 1;
        for (i ; i < n; i++)
           if(arr[i+1]>arr[i])
                break;
        
        if(arr[0]<arr[i+1] && i<n) cout<<"yes"<<endl<<1<<' '<<i+1;
        if(arr[0]>arr[i+1]) cout<<"no";
        if(i==n) cout<<"yes"<<endl<<1<<' '<<i;
    }
    return 0;
}