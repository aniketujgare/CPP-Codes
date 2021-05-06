#include <bits/stdc++.h>
using namespace std;

// Using String
int stringToInt(string str)
{
    if (str.length() == 0)
        return 0;

    int smallAns = stringToInt(str.substr(0, str.length() - 1));
    int lastDigit = str[str.length() - 1] - '0';
    int ans = smallAns * 10 + lastDigit;
    return ans;
}

// Using Character Array
int stringToInt(string str, int n)
{
    if (n == 0)
        return 0;

    int smallAns = stringToInt(str, n - 1);
    int lastDigit = str[n - 1] - '0';
    int ans = smallAns * 10 + lastDigit;
    return ans;
}

int main()
{
    { // For string
        string str = "321";
        int ans = stringToInt(str);
        cout << ans << endl;
    }

    // For char array
    char str[] = "12345";
    int n = sizeof(str) / sizeof(str[0]) - 1; // lenght
    int a = stringToInt(str, n);
    cout << a << endl;

    return 0;
}