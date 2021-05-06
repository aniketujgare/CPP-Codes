#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }
    vector<int> ans;
    for (int i = 0; i < v.size(); i++)
    {
        int cnt{0};
        for (int j = 0; j < v[i].size(); j++)
        {
            if (v[i][j] == '4' || v[i][j] == '7')
                cnt++;
        }
        if (cnt <= k)
            ans.push_back(stoi(v[i]));
    }
    cout << ans.size();

    return 0;
}