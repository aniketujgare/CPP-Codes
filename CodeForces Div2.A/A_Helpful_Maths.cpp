#include <bits/stdc++.h>
using namespace std;

int main()
{
    int ones{0}, twos{0}, threes{0}, plusSign{0};
    string equation;
    cin >> equation;

    for (char a : equation)
    {
        switch (a)
        {
        case '1':
            ones++;
            break;
        case '2':
            twos++;
            break;
        case '3':
            threes++;
            break;
        default:
            plusSign++;
            break;
        }
    }
    string ans;
        while (ones--)
        {
            ans+='1';
            if(plusSign--)
            ans+='+';
        }
        while (twos--)
        {
            ans+='2';
            if(plusSign--)
            ans+='+';
        }
        while (threes--)
        {
            ans+='3';
            if(plusSign--)
            ans+='+';
        }
        
        cout<<ans;

    return 0;
}