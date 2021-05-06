#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n,k;
    cin>>n>>k;
    // cout<<log(k);return 0;
    if(k%n!=0)
    {
        cout<<"NO"; return 0;
    }
    long long cnt{0};
    while(n!=k)
    {
        n =(n*n);
        cnt++;
    }
    cout<<"YES"<<endl<<cnt;
    return 0;
}