#include <bits/stdc++.h>
using namespace std;

int main()
{
    //    Overall the friends have 4 * 5 = 20 milliliters of the drink,
    //    it is enough to make 20 / 3 = 6 toasts. The limes are enough for 10 * 8 = 80 toasts
    //    and the salt is enough for 100 / 1 = 100 toasts. However, there are 3 friends in the group,
    //    so the answer is min(6, 80, 100) / 3 = 2.
    //  3  4  5  10 8 100  3   1
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    // int drink = (k * l) / n;
    // int lime = c * d;
    // int salt = p / np;
    int drink = (k * l)/nl;
    int lime = (c * d);
    int salt = (p / np);

    cout << min(min(drink, lime), salt)/n;
    return 0;
}