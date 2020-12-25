#include <iostream>
#include <string>
using namespace std;

int main()
{
    string gray;
    string binary;
 
    cout << "Input Grey Number: " ;
    cin >> gray;
    int len = gray.length();
    binary += gray[0];

    for (int i = 1; i < len; i++)
    {
        if (binary[i - 1] != gray[i])
        {
            binary += "1";
        }
        else
            binary += "0";
    }
    cout <<"Binary Number is: " <<binary;
    return 0;
}


// OUTPUT:
// Input Grey Number: 1101
// Binary Number is: 1001