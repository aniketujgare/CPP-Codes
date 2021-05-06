//Convert decimal number into octal number system , then you can convert into binary number by converting each digit to binary number
#include <bits/stdc++.h>
using namespace std;

int octal(int);
void binary(int);

int main()
{
    int n;
    cin >> n;
    binary(octal(n));
    return 0;
}

//Octal conversion
int octal(int n)
{   
    int  r, res=0;
    int i = 0;
    while (n != 0)
    {
        r = n % 8;
        res += r * pow(10, i);
        n = n / 8;
        i++;
    }
    return res;
}
//Binary Conversion
void binary(int n)
{
    string b = to_string(n);
    for(int i=0; i<b.length();i++)
    {
        int temp = b[i] - '0';
        string r;
        while(temp !=0)
        {
           r+= temp%2 ? '1':'0';
           temp = temp/2;
        }
        cout<<r; 
    }
}