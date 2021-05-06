#include<bits/stdc++.h>
using namespace std;

// Helper function to flip the bit
char flip(char c) { return (c == '0') ? '1' : '0'; }

string decimalToBinary(int d)
{
    string r;
    while (d != 0){
        r += ( d % 2 == 0 ? "0" : "1" );
        d /= 2;
    }
    reverse(r.begin(),r.end());
    return r;
}

int binaryToDecimal(string n)
{
    string num = n;
    int dec_value = 0;
 
    // Initializing base value to 1, i.e 2^0
    int base = 1;
 
    int len = num.length();
    for (int i = len - 1; i >= 0; i--) {
        if (num[i] == '1')
            dec_value += base;
        base = base * 2;
    }
 
    return dec_value;
}
//User function Template for C++

// function to conver given N Gray to Binary
int grayToBinary(int n)
{
    
    string gray="";
    string binary;
 
    gray = decimalToBinary(n);
    // cout<<gray<<endl;
    // MSB of binary code is same as gray code
    binary += gray[0];


    // Compute remaining bits
    for (int i = 1; i < gray.length(); i++) {
        // If current bit is 0, concatenate
        // previous bit
        if (gray[i] == '0')
            binary += binary[i - 1];
 
        // Else, concatenate invert of
        // previous bit
        else
            binary += flip(binary[i - 1]);
    }
    int b = binaryToDecimal(binary);
    return b;
    
}

// { Driver Code Starts.

int main()
{
    int n;
        cin>>n;//initializing n
        //calling function grayToBinary()
       cout<<grayToBinary(n) <<endl;
       
}
