#include <iostream>
#include <algorithm>
using namespace std;
// Input:
// N = 3
// Output: 6
// Explanation: 6 is the smallest number
// divisible by 1,2,3.

int main()
{
    long long n=6;
    long long ans=1;
    
    if( n== 0)
    {
        return 0;
    }
    for(long long i =1; i<=n ; i++)
        ans = (ans * i)/(__gcd(ans, i));
    cout<<ans;
    
 
    return 0;
}