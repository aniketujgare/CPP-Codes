#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0;

    while (n)
    {
        n = (n & (n << 1));
        count++;
    }
    cout<<count<<endl;

    return 0;
}
/*
say we start out with 5869

5869 = 1011011101101
<<1  = 0110111011010
&    = 0010011001000  = 1224

<<1  = 0100110000000
&      0000010000000  = 128

<<1  = 0000100000000
&    = 0000000000000  = 0
thats 3 cycles. which is the answer.
*/