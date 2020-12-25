#include <iostream>
#include <string>
using namespace std;

int main()
{
    string binary;
    string gray;

    cout << "Input Binary Number: " ;
    cin >> binary;
    int len = binary.length();
    gray += binary[0];

    for (int i = 1; i < len; i++)
    {
        if (binary[i - 1] != binary[i])
        {
            gray += "1";
        }
        else
            gray += "0";
    }
    cout <<"Grey Code is: " <<gray;
    return 0;
}