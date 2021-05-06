// { Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

// Helper function to xor two characters
char xor_c(char a, char b) { return (a == b) ? '0' : '1'; }
string decToBinary(int d)
{
    string b;
    while(d!=0)
    {
       b += (d % 2 ? '1' : '0');
       d = d/2;
    }
    reverse(b.begin(),b.end());
    return b;
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
//  Function to find the gray code of given number N
int greyConverter(int n)
{
    string r;
    string s;
    s = decToBinary(n);
    // cout<<s<<endl;

    r+=s[0];

    for (int i = 1; i < s.length(); i++) {
        r += xor_c(s[i - 1], s[i]);
    }
    int decimal = binaryToDecimal(r);
    return decimal;
}


int main()
{
    int n;
    cin >> n;//input n
        
    //calling greyConverter() function
    cout << greyConverter(n) << endl;
}