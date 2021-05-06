#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<bool> isPrime (n+1,true);
    isPrime.at(0)= isPrime.at(1) = false;
    for (size_t i = 2; i*i <= n; i++)
    {
        for (size_t j = 2*i; j <= n; j+=i)
        {
            isPrime.at(j)=false;
        }
        
    }
    for (size_t i = 0; i < isPrime.size(); i++)
    {
        cout<<i<<" "<<isPrime.at(i)<<endl;
    }
    
    return 0;
}