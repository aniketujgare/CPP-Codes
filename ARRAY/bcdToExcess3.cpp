#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void excess3(string);
int main()
{
    string bcd;
    cout << "Input BCD Code" << endl;
    cin >> bcd;
    vector<string> str;
    int len = bcd.length();
    int counter = len;
    //if bcd entered is
    if (len < 4)
    {
        cout << "Wrong BCD Code!! BCD should have at leaset 4 bits";
        return -1;
    }

    for (size_t i = 0; i < len / 4; i++)
    {
        string temp;
        if (counter < 4 && counter > 0)
        {
            // Inserts at 0th index, 4 - counter occurrences of '0'
            bcd.insert(0, 4 - counter, '0');
            counter = 4;
        }

        temp = bcd.substr(counter - 4, 4);
        str.push_back(temp);
        counter -= 4;
    }
    for (int i = str.size() - 1; i >= 0; i--)
        excess3(str[i]);

    return 0;
}

void excess3(string a)
{
    string b = "0011";
    string res;
    int i = a.size() - 1, j = b.size() - 1;
    int sum, carry = 0;
    while (i >= 0 || j >= 0)
    {
        sum = carry;
        if (i >= 0)
            sum += a[i] - '0';
        if (j >= 0)
            sum += b[j] - '0';
        res += to_string(sum % 2);
        carry = sum / 2;
        i--;
        j--;
    }
    if (carry != 0)
        res += '1';

    reverse(res.begin(), res.end());
    cout << res;
}