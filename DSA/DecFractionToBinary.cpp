#include <bits/stdc++.h>
using namespace std;

int main()
{
    double fractional;
    int k_prec =5;
    int i=3;
    string binary="0.";
    cin>>fractional;
     while (k_prec--) 
    { 
        // Find next bit in fraction 
        fractional *= 2; 
        int fract_bit = fractional; 
  
        if (fract_bit == 1) 
        { 
            fractional -= fract_bit; 
            binary.push_back(1 + '0'); 
        } 
        else
            binary.push_back(0 + '0'); 
    } 
    for (size_t i = 0; i < binary.size(); i++)
    {
        cout<<binary[i];
    }
    

    return 0;
}