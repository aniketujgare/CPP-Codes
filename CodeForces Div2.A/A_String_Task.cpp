#include <bits/stdc++.h>
using namespace std;

char vow[] = {'a', 'A', 'e', 'E', 'i', 'I', 'o', 'O', 'u', 'U','y','Y'};

bool isVowel(char si)
{
    for (char e : vow)
    {
        if (si == e)
        {
            return true;
        }
    }
    return false;
}

int main()
{

    string str;
    cin >> str;
    string ans;
    for (int i = 0; i < str.length(); i++)
    {
        char si = str[i];
        if (!isVowel(si))
        {
            ans += '.';
            ans += tolower(str[i]);
        }
    }
    cout << ans << endl;

    return 0;
}