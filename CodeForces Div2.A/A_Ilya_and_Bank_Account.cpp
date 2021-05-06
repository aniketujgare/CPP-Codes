#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n >= 0)
    {
        cout << n;
        return 0;
    }
    string ans = to_string(n);
    int Fst = abs(n % 10);
    int Snd = abs((n / 10) % 10);

    if (Fst > Snd)
        n = n / 10;
    else
    {
        n = (n / 100);
        // cout<<n<<endl;
        string ans = to_string(n);
        ans.erase(0, ans.find_first_not_of('0'));
        if (ans.empty() && Fst != 0)
            cout << '-';
        cout << ans << Fst;
        return 0;
    }
    // cout<<Fst<<" "<<Snd;
    cout << n;
    return 0;
}