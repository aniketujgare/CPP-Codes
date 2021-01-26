//https://www.codechef.com/JAN21C/problems/DECODEIT
#include <iostream>
using namespace std;

int main()
{
    int t, n, temp;
    string code;
    char s[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p'};
    int start = 0, end = 15;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cin.ignore();
        getline(cin, code);
        int times = n / 4;
        for (int i = 0; i < n; i++)
        {
            temp = (end - start + 1) / 2;
            if (code[i] == '1')
                start += temp;
            else
                end -= temp;

            if (start == end)
            {
                cout << s[end];
                start = 0;
                end = 15;
            }
        }
        cout<<endl;
    }

    return 0;
}