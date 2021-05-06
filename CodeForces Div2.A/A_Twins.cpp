#include <bits/stdc++.h>
using namespace std;

#define coinVal 100
int coins[coinVal];

int main()
{
    int noOfCoins, totalSum{0};
    cin >> noOfCoins;

    for (size_t i = 0; i < noOfCoins; i++)
    {
        int c;
        cin >> c;
        coins[i]=c;
        totalSum += c;
    }
    //sorting decending order
    sort(coins,coins+noOfCoins, greater<int>());

    int own{0}, rem{totalSum};
    int i =0;
    for (i; i < coinVal + 1; i++)
    {
        if (own < rem || own==rem)
        {
            own += coins[i];
            rem = rem - coins[i];
        }
        else break;
    }

    cout<<i;
    
    return 0;
}