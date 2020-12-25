#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

void bcd(string);
int decimal(unsigned int);
long long Binary(int);
int binaryToDecimal(int);
int main()
{
    string excess3;
    cout << "Input Excess3 Code" << endl;
    cin >> excess3;
    vector<string> str;
    int len = excess3.length();
    int counter = len;
    //if excess3 entered is
    if (len < 4)
    {
        cout << "Wrong Excess3 Code!! Excess3 should have at leaset 4 bits";
        return -1;
    }

    for (size_t i = 0; i < len / 4; i++)
    {
        string temp;
        if (counter < 4 && counter > 0)
        {
            // Inserts at 0th index, 4 - counter occurrences of '0'
            excess3.insert(0, 4 - counter, '0');
            counter = 4;
        }

        temp = excess3.substr(counter - 4, 4);
        str.push_back(temp);
        counter -= 4;
    }
    cout<<"BCD Converted Code is"<<endl;
    for (int i = str.size() - 1; i >= 0; i--)
        bcd(str[i]);

    return 0;
}

void bcd(string a)
{
    int num1 = stoi(a), num2 = 3;
    int temp1 ,temp2=3 ,sub;
    long long binary;

    temp1 = binaryToDecimal(num1);

    if(temp1 <temp2)
        cout<<"Invalid Input";
    else
    {
        sub = temp1 - temp2;
        binary = Binary(sub);
        string s = to_string(binary);
        if (s.length()<4)
        {
            s.insert(0, 4-s.length(),'0');
        }
        cout<<s;
    }
}

long long Binary(int num)
{
    int rem;
    long long binary = 0, i = 1;
    do
    {
        rem = num % 2;
        binary = binary + (i*rem);
        num = num / 2;
        i = i * 10;
    } while (num>0);
    return binary;
} 

int binaryToDecimal(int n)
{
    int num = n;
    int dec_value = 0;
    // Initializing base value to 1, i.e 2^0
    int base = 1;
 
    int temp = num;
    while (temp) {
        int last_digit = temp % 10;
        temp = temp / 10;
 
        dec_value += last_digit * base;
 
        base = base * 2;
    }
 
    return dec_value;
}

// OUTPUT:

// Input Excess3 Code
// 100110001011
// BCD Converted Code is
// 011001011000