#include <bits/stdc++.h>
using namespace std;

int main()
{
    int height, base;
    cin>>height>>base;
    for (size_t i = base; i >= 1; i--)
    {
        size_t j=i;
        for ( ; j < base; j--)
        {
            cout<<'*'<<' ';
        }
        cout<<endl;
    }
    cout<<'*';
    return 0;
}