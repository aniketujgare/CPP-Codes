#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> input;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        input.push_back(x);
    }
    int times = n - 2;
    vector<vector<int>> holds;

    while (times--)
    {
        holds.push_back(input);
    }
    int index = 1;
    for (int i = 0; i < holds.size(); i++)
    {
        holds[i].erase(holds[i].begin() + index);
        index++;
    }
    // for (int i = 0; i < holds.size(); i++)
    // {
    //     for (int j = 0; j < holds[i].size(); j++)
    //     {
    //         cout << holds[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    vector<int> ans;
    for (int i = 0; i < holds.size(); i++)
    {
        int maxDiff = INT_MIN;
        for (int j = 0; j < holds[i].size() - 1; j++)
        {
            int currDiff = holds[i][j + 1] - holds[i][j];
            // cout << holds[i][j] << " ";
            if (currDiff > maxDiff)
                maxDiff = currDiff;
        }
        ans.push_back(maxDiff);
        // cout <<endl;
    }
    sort(ans.begin(), ans.end());
    cout << ans[0];
    return 0;
}