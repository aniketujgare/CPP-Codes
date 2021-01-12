#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int swapCount(string a, string b, int aSum, int bSum)
{
    int len = min(a.length(), b.length());
    int count = 0;
    int pA = 0;
    int pB = b.length() - 1;

    if (aSum > bSum)
        return 0;
    while (len--)
    {
        aSum -= a[pA] - '0';
        bSum -= b[pB] - '0';

        aSum += b[pB] - '0';
        bSum += a[pA] - '0';

        count++;
        if (aSum > bSum)
            return count;

        pA++;
        pB--;
    }
    return -1;
}
int main()
{
    int t, n, m;
    cin >> t;
    string a, b;
    while (t--)
    {
        int aSum = 0, bSum = 0;
        bool aI = true, bI = true;
        int countA = 0, countB = 0;
        cin >> n >> m;
        while (n--)
        {
            int temp;
            cin >> temp;
            ;
            a += temp + '0';
            aSum += temp;
            if (countA > 0)
            {
                if (a[countA] != a[countA - 1])
                    aI = false;
            }
            countA++;
        }
        while (m--)
        {
            int temp;
            cin >> temp;
            ;
            b += temp + '0';
            bSum += temp;
            if (countB > 0)
            {
                if (b[countB] != b[countB - 1])
                    bI = false;
            }
            countB++;
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        if (aI == true && bI == true)
        {
            if (a.length() == b.length())
            {
                cout << 0 << endl;
            }
        }
        else
        {
            cout << swapCount(a, b, aSum, bSum) << endl;
        }
    }
    return 0;
}