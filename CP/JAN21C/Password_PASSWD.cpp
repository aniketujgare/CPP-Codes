// {'@' = 64, '#' = 35, '%' = 37, '&' = 38, '?' = 61}
// {'a' = 97, 'z' = 122}
// {'A' = 65, 'Z' = 90}
// {'0' = 48, '9' = 57}
/*
4
aniketUj@1999batu
#cookOff#P1
U@code4CHEFINA
gR3@tPWD
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        bool lc = false, uc = false, nc = false, sc = false;
        string ans = "NO";
        if (str.length() >= 10)
        {
            for (int i = 0; i < str.length(); i++)
            {
                if (str[i] >= 'a' && str[i] <= 'z') lc = true;
                if (i>0 && i<str.length()-1)
                {
                    if(str[i]>='A' && str[i]<='Z') uc =true;
                    if(str[i]>='0'&&str[i]<='9') nc =true;
                    if(str[i]=='@'||str[i]=='#'||str[i]=='?'||str[i]=='&'||str[i]=='%') sc=true;
                }
            }
            if(lc&&uc&&nc&&sc)
            ans="YES";
        }
        cout<<ans<<endl;
    }
    return 0;
}