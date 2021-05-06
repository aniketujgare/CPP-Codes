#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;

    int a = 0;

    for (int i = 0; i < t.size(); i++)
    {
        if (t[i] == s[a])
            a++;
    }
    cout << a + 1;

    return 0;
}