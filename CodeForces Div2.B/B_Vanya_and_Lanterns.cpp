#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = (a); i < (b); i++)

using namespace std;

int main()
{
    int n,l;cin>>n>>l;
    int lamp [n]; 
    rep(i,0,n) cin>>lamp[i];
    sort(lamp,lamp+n);
    int maxR = max(0,lamp[0]);
    maxR = max(maxR,l-lamp[n-1]);
    double ans = maxR/1.0;
    rep(i,1,n) 
    {
        double t = (lamp[i]-lamp[i-1])/2.0;
        ans = max(ans,t );
    }
    cout<<setprecision(10)<<fixed<<ans/1.0<<endl;
    return 0;
}