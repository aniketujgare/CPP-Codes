#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<string> teams;
    ;
    while (n--)
    {
        string s;
        cin >> s;
        teams.push_back(s);
    }

    sort(teams.begin(), teams.end());

    string team1 = teams[0];
    int cnt = 1;
    for (int i = 1; i < teams.size(); i++)
    {
        if (teams[i] == team1)
            cnt++;
    }

    if (cnt > teams.size() / 2)
        cout << team1;
    else
        cout << teams.back();
    return 0;
}