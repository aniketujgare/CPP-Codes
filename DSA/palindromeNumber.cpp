#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, ans =0;;
    cin>>n;
    ans = n%10;
    while (n!=0)
    {
        n = n/10;
        int rem = n%10;
        ans = ans*10+ rem;
    }
    cout<<ans/10;
    
    return 0;
}