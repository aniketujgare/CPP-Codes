
#include<bits/stdc++.h>
using namespace std;

int largestPowerOf2inrange(int);
int countSetBits(int);

int main()
{
	       int n;
           cout <<"Input Number"<< endl;
	       cin>>n; //input n
	       cout << countSetBits(n) << endl;// print the answer
	  return 0;
}

// Function to count set bits in the given number x
// n: input to count the number of set bits
int countSetBits(int n)
{
    if (n == 0)
    {
        return 0;
    }
    
    int x = largestPowerOf2inrange(n);
    int btill2x = x * (1 << ( x - 1 ) );
    int msb2xton = n - ( 1 << x ) + 1;
    int rest = n - ( 1 << x );
    int ans = btill2x + msb2xton + countSetBits(rest);
    
    return ans;
}
//count larges power of 2 till n
int largestPowerOf2inrange(int n)
{
    int x = 0;
    
    while ((1 << x) <=n )
    {
        x++;
    }
    return x-1;
}
