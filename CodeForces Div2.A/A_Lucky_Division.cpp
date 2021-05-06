#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string num = to_string(n);
    bool pass = true;

    for (char e : num)
    {
        if (e == '4' || e == '7')
            continue;
        else
        {
            pass = false;
            break;
        }
    }

    if (pass == true)
        cout << "YES";
    else if (n % 4 == 0 || n % 7 == 0 || n % 47 == 0 || n % 744 == 0)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}