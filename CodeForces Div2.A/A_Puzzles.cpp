#include <bits/stdc++.h>
using namespace std;

int main()
{
    int stud, shop;
    cin >> stud >> shop;

    int shopNo[shop];
    for (size_t i = 0; i < shop; i++)
        cin >> shopNo[i];

    sort(shopNo, shopNo + shop);

    int diff = shopNo[stud - 1] - shopNo[0];
    for (size_t i = 1; i <= shop - stud; i++)
    {
        int currWindow = shopNo[i + stud - 1] - shopNo[i];
        if (currWindow < diff)
            diff = currWindow;
    }

    cout << diff;

    return 0;
}