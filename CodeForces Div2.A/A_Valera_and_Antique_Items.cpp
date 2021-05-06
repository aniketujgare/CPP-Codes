#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<vector<int>> sellers;
    while (n--)
    {
        int items;
        cin >> items;
        vector<int> itemPrice;
        while (items--)
        {
            int price;
            cin >> price;
            itemPrice.push_back(price);
        }
        sellers.push_back(itemPrice);
    }
    vector<int> ans;
    for (int i = 0; i < sellers.size(); i++)
    {
        bool canDeal = false;
        for (int j = 0; j < sellers[i].size(); j++)
        {
            if(k>sellers[i][j])
            {
                canDeal = true;
            }
        }
        if (canDeal)
        {
            ans.push_back(i+1);
        }
        
    }
    cout<<ans.size()<<endl;
    for(int a:ans)
    cout<<a<<' ';
    return 0;
}