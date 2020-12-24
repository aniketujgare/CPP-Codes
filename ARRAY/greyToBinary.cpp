#include <iostream>
#include <string>
using namespace std;

int main()
{
    string grey;
    string binary;
 
    cout << "Input Grey Number: " ;
    cin >> grey;
    int len = grey.length();
    binary += grey[0];

    for (int i = 1; i < len; i++)
    {
        if (binary[i - 1] != grey[i])
        {
            binary += "1";
        }
        else
            binary += "0";
    }
    cout <<"Binary Number is: " <<binary;
    return 0;
}