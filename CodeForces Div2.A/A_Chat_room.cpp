#include <bits/stdc++.h>
using namespace std;
bool h, e, l1, l2, o;
int main()
{
    string str;
    cin >> str;

    for (int i = 0; i < str.length(); i++)
    {
        char a = str[i];
        if (a == 'h' || a == 'e' || a == 'l' || a == 'o')
        {
            if (a == 'h' && !h)
                h = true;
            else if (a == 'e' && h && !e)
                e = true;
            else if (a == 'l' && h && e && !l1)
                l1 = true;
            else if (a == 'l' && h && e && l1 && !l2)
                l2 = true;
            else if (a == 'o' && h && e && l1 && l2 && !o)
                o = true;
        }
    }
    if (h && e && l1 && l2 && o)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}