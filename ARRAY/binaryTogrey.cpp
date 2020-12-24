#include <iostream>
#include <string>
using namespace std;

int main()
{
    string binary;
    string grey;

    cout << "Input Binary Number: " ;
    cin >> binary;
    int len = binary.length();
    grey += binary[0];

    for (int i = 1; i < len; i++)
    {
        if (binary[i - 1] != binary[i])
        {
            grey += "1";
        }
        else
            grey += "0";
    }
    cout <<"Grey Code is: " <<grey;
    return 0;
}