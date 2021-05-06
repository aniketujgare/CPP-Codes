#include <bits/stdc++.h>
using namespace std;
#define levelNo 100
int level[levelNo + 10];
int main()
{
    int levels;
    cin >> levels;
    int xy;
    cin >> xy;
    for (int i = 0; i < xy; i++)
    {
        int p;
        cin >> p;
        level[p]++;
    }
    cin >> xy;
    for (int i = 0; i < xy; i++)
    {
        int p;
        cin >> p;
        level[p]++;
    }
    bool cw = true;
    for (int i = 1; i <= levels; i++)
    {
        if (level[i] == 0)
            cw = false;
    }
    cw ? cout << "I become the guy." : cout << "Oh, my keyboard!";

    return 0;
}