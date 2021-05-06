#include <bits/stdc++.h>
using namespace std;
#define alphabets 256

int hsh[alphabets];
int main()
{

    string line;
    getline(cin, line);
    for (int i = 0; i < line.length(); i++)
    {
        hsh[line[i] - '0']++;
    }
    hsh['{' - '0'] = 0;
    hsh['}' - '0'] = 0;
    hsh[',' - '0'] = 0;
    int cnt{0};
    for (auto a : hsh)
    {
        if (a != 0)
            cnt++;
        ;
    }
    cout << cnt;
    return 0;
}