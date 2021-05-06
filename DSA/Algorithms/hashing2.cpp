/*
Given array a of N integers. Given Q queries
and in each query given L and R print sum of
array elements from index L to R (L,R included)


Constraints
1 <= N <= 10^5
1 <= a[i] <= 10^9
1 <= Q <= 10^5
1 <= L, R <= N

*/
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int a[N];
long long pf[N];
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        pf[i] = pf[i-1] + a[i] ;
    }
    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        cout <<  pf[r] - pf[l-1]<< endl;
    }
    // O(N) + O(Q*N) = 10^10
    // O(N) + O(Q) = 10^5 + 10^5 = 2* 10^5
    return 0;
}