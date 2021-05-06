#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int choco[n];
        int total{0};
        int type = -1;
        int typeCnt {0};
        unordered_set <long long> st;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            choco[i] = x;
            total += x;
            st.insert(x);
        }

        typeCnt = st.size();
        cout << min(typeCnt, n-x);
        cout << endl;
    }

    return 0;
}