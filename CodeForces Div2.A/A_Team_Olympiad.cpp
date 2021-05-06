#include <bits/stdc++.h>
using namespace std;
int hsh[4];
int main()
{
    int n;
    cin >> n;
    int arr[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> arr[i];

    for (int i = 1; i <= n; i++)
        hsh[arr[i]]++;

    int groups = min(min(hsh[1], hsh[2]), hsh[3]);

    int a, b, c;
    a = b = c = -1;
    int t = groups;
    cout << groups << endl;
    while (t--)
    {
        bool isFoundA, isFoundB, isFoundC;
        isFoundA = isFoundB = isFoundC = false;
        for (int i = 1; i <= n; i++)
        {
            if (arr[i] == 1 && !isFoundA)
            {
                a = i;
                arr[i] = 0;
                isFoundA = true;
            }
            else if (arr[i] == 2 && !isFoundB)
            {
                b = i;
                arr[i] = 0;
                isFoundB = true;
            }
            else if (arr[i] == 3 && !isFoundC)
            {
                c = i;
                arr[i] = 0;
                isFoundC = true;
            }
        }
        cout << a << " " << b << " " << c << endl;
    }

    return 0;
}