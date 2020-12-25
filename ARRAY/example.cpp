#include <iostream>
using namespace std;

int main()
{
    string t ="0011";
    int bit2 = t.at(3) - '0';
    bit2++;
    cout<<bit2;
    return 0;
}