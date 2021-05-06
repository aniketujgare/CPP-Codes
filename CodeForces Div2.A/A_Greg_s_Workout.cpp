#include <bits/stdc++.h>
using namespace std;
//chest biceps back
int main()
{
    int n;
    cin >> n;
    int exercise[n];
    int chestReps{0}, bicepsReps{0}, backReps{0};
    bool isChestDay = true, isBicepsDay = false, isBackDay = false;
    for (int i = 0; i < n; i++)
    {
        cin >> exercise[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (isChestDay)
        {
            chestReps += exercise[i];
            isBicepsDay = true;
            isChestDay = false;
        }
        else if (isBicepsDay)
        {
            bicepsReps += exercise[i];
            isBackDay = true;
            isBicepsDay = false;
        }
        else if (isBackDay)
        {
            backReps += exercise[i];
            isChestDay = true;
            isBackDay = false;
        }
    }
    string ans;
    if (chestReps > bicepsReps && chestReps > backReps)
        ans = "chest";
    else if (bicepsReps > chestReps && bicepsReps > backReps)
        ans = "biceps";
    else
        ans = "back";

    cout << ans;
    return 0;
}