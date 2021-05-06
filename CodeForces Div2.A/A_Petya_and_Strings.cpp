#include <bits/stdc++.h>
using namespace std;
#define alphabet 26

int hsh[alphabet];
int main()
{
    string sto, pra;
    cin >> sto >> pra;

    // using transform() function and ::tolower in STL
    transform(sto.begin(), sto.end(), sto.begin(), ::tolower);
    transform(pra.begin(), pra.end(), pra.begin(), ::tolower);
    if (sto == pra)
        cout << '0';

    for (int i = 0; i < alphabet; i++)
        hsh[i] = i;

    int val1 = 0, val2 = 0;
    for (int i = 0; i < sto.length(); i++)
    {
        val1 += hsh[sto[i] - 'a'];
        val2 += hsh[pra[i] - 'a'];
        if (val1 > val2)
        {
            cout << '1';
            break;
        }
        else if (val2 > val1)
        {
            cout << "-1";
            break;
        }
    }

    return 0;
}