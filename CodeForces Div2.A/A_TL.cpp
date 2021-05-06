#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int a[n], b[m];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];

    sort(a, a + n);
    sort(b, b + m);

    int ans = a[n - 1];
    if (ans < 2 * a[0])
        ans = 2 * a[0];
    // cout<<ans<<endl;
    if (ans > b[0] || ans == b[0])
        ans = -1;

    cout << ans;
    return 0;
}
