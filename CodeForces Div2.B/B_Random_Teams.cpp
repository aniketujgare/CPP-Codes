#include <bits/stdc++.h>
using namespace std;

int ncr(int n, int r)
{
    if (n == r)
        return 1;
    if (r == 1)
        return n;
    return ncr(n - 1, r) + ncr(n - 1, r - 1);
}

int main()
{
    int n, t;
    cin >> n >> t;

    { //min pairs ~ even distribution;
        int members;
        if (n & 1)
        {
            int rem = n%t;
            int divi = n/t;
            members = max(rem,divi);
            if(rem==0)rem=1;
            if(members==1)
            cout<<members<<' ';
           else cout<<ncr(members,2)*rem<<' ';
        }
        else
        {
            members = n / t;
            cout << ncr(members, 2) * t << ' ';
        }

    }

    //max pairs ~ odd distribution;
    int members = n - (t - 1);
    members == 1 ? cout << 1 << ' ' : cout << ncr(members, 2) << ' ';
    return 0;
}