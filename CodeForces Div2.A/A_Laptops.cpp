#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; // no of laptops
    cin >> n;
    map<int, int> lap;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        lap.insert(pair<int, int>(a, b));
    }
    int first = lap.begin()->second;
    for (auto itr = ++lap.begin(); itr != lap.end(); ++itr)
    {
        if (itr->second < first)
        {
            cout << "Happy Alex";
            return 0;
        }
        first = itr->second;
    }
    cout << "Poor Alex";
    return 0;
}