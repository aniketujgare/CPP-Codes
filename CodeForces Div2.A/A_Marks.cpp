#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<string> s;
    int stp = n;
    while (stp--)
    {
        string t;
        cin >> t;
        s.push_back(t);
    }
    // cout<<s.size();return 0;
    vector<int> ans;
    for (int i = 0; i < s.size(); i++)
    {
        // cout<<"index "<< i<<endl;

        for (int j = 0; j < m; j++)
        {
            bool topper = true;
            int marks = s[i][j] - '0';
            // cout << "marks " << marks << endl;
            for (int k = 0; k < n; k++)
            {
                // cout<<s[k][j]- '0'<<' '<<marks<<endl;
                if (s[k][j] - '0' > marks)
                { // ans.push_back(s[i][k] - '0');

                    topper = false;

                    // cout << "break " << j << k << endl;
                    break;
                }
            }
            if (topper)
            {
                ans.push_back(i);
                // cout<<"true "<<i<<endl;
                break;
            }
            // cout<<"break at "<< i<<endl;;
        }
    }
    cout << ans.size();
    return 0;
}