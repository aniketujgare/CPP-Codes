#include <bits/stdc++.h>
using namespace std;

int main()
{
    int cntOne = 0;
    string str =  "000111";
    for (int i = 0; i < str.size(); i++)
        if (str[i] == '1')
            cntOne++;

    int zero = 0, one = 0, res = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '0')
            zero++;
        else
            one++;
        res = max(res, zero + cntOne - one);
    }

    cout << res;
    return 0;
}