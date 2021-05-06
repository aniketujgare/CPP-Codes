#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r, c;
    cin >> r >> c;
    char cake[r][c];
    vector<vector<int>> strawPos;
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            cin >> cake[i][j];
            if (cake[i][j] == 'S')
            {
                vector<int> pair;
                pair.push_back(i);
                pair.push_back(j);
                strawPos.push_back(pair);
            }
        }
    }
    int x[strawPos.size()];
    int y[strawPos.size()];
    int i = 0;
    //pos of r,c of strawberries fill in x,y arr

    for (int k = 0; k < strawPos.size(); k++)
    {
        x[i] = strawPos[k][0];
        y[i] = strawPos[k][1];
        i++;
    }
    //upon all combinations of r,c of berry filled S
    for (int k = 0; k < i; k++)
    {
        for (int l = 0; l < i; l++)
        {
            cake[x[k]][y[l]] = 'S';
        }
    }

    int cnt{0};
    //counted cell without strawberries
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            if (cake[i][j] == '.')
                cnt++;
        }
    }
    cout << cnt;
    return 0;
}