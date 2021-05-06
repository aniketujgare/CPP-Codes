#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> pairs;
    vector<vector<int>> ans;
    for (int i = 0; i < n; i++)
    {
        vector<int> point;
        int x;
        cin >> x;
        point.push_back(x);
        cin >> x;
        point.push_back(x);
        pairs.push_back(point);
    }
    for (int i = 0; i < pairs.size(); i++)
    {
        int x = pairs[i][0];
        int y = pairs[i][1];
        vector<int> Ys;
        vector<int> Xs;
        for (int j = 0; j < pairs.size(); j++)
        {
            //check y for same x axes
            if (pairs[j][0] == x)
                Ys.push_back(pairs[j][1]);
        }
        sort(Ys.begin(), Ys.end()); //check y lies middle
        if (y != Ys[0] && y != Ys[Ys.size() - 1])
        {
            //check x for same y axes
            for (int j = 0; j < pairs.size(); j++)
            {
                //check y for same x axes
                if (pairs[j][1] == y)
                    Xs.push_back(pairs[j][0]);
            }
            sort(Xs.begin(), Xs.end()); //check c lies middle
            // for (int a : Xs)
            //     cout << a << ' ';return 0;
            if (x != Xs[0] && x != Xs[Xs.size() - 1])
                ans.push_back(pairs[i]);
        }
    }
    cout << ans.size();
    // for (int i = 0; i < ans.size(); i++)
    // {
    //     cout<<ans[i][0]<<' '<<ans[i][1]<<endl;
    // }

    /*  vector<vector<int>> cornerPt;
    int minX = pairs[0][0];
    int minXIndex = 0;
    int maxX = pairs[0][0];
    int maxXIndex = 0;
    int minY = pairs[0][1];
    int minYIndex = 0;
    int maxY = pairs[0][1];
    int maxYIndex = 0;
    for (int i = 1; i < pairs.size(); i++)
    {
        //x minX and x maxX
        if (pairs[i][0] < minX)
        {
            minX = pairs[i][0];
            minXIndex = i;
        }
        if (pairs[i][0] > maxX)
        {
            maxX = pairs[i][0];
            maxXIndex = i;
        }
        //y minX and y maxX
        if (pairs[i][1] < minY)
        {
            minY = pairs[i][1];
            minYIndex = i;
        }
        if (pairs[i][1] > maxY)
        {
            maxY = pairs[i][1];
            maxYIndex = i;
        }
    }
    // cout<<minX<<' '<<maxX<<endl;
    // cout<<minY<<' '<<maxY<<endl;
    // return 0;
    int cornerX[2], cornerY[2];
    cornerX[0] = minX;
    cornerX[1] = maxX;
    cornerY[0] = minY;
    cornerY[1] = maxY;
    vector<int> cornerIndex;
    for (int i = 0; i < pairs.size(); i++)
    {
        if (pairs[i][0] == cornerX[0] || pairs[i][0] == cornerX[1])
        {
            // cornerPt.push_back(pairs[i]);
            // if((cornerIndex.end()-1)!=i)
            // auto it =find(cornerIndex.begin(),cornerIndex.end(),i);
            // if(it==cornerIndex.end())
            cornerIndex.push_back(i);
        }
        if (pairs[i][1] == cornerY[0] || pairs[i][1] == cornerY[1])
        {
            // cornerPt.push_back(pairs[i]);
            // auto it =find(cornerIndex.begin(),cornerIndex.end(),i);
            // if(it==cornerIndex.end())
            cornerIndex.push_back(i);
        }
    }
    for(int a:cornerIndex)
    cout<<a<<' '<< char(a+'a') <<endl;return 0;
    // cout<<pairs.size()<<endl;return 0;
    int cnt{0};
    for (int i = 0; i < pairs.size(); i++)
    {
        auto it = find(cornerIndex.begin(), cornerIndex.end(), i);

        if (it == cornerIndex.end())
        {
            bool x = false, y = false;
            for (int j = 0; j < cornerIndex.size(); j++)
            {
                if (pairs[i][0] == pairs[cornerIndex[j]][0])
                    x = true;
                if (pairs[i][1] == pairs[cornerIndex[j]][1])
                    y = true;

                if (x && y)
                {
                    cout << pairs[i][0] << ',' << pairs[i][1] << endl;
                    cnt++;
                    break;
                }
            }
        }
    }
        cout<<cnt;*/
    return 0;
}