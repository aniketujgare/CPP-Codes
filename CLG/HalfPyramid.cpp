#include <bits/stdc++.h>
using namespace std;

int main()
{
    int height, base;
    cin>>height>>base;
    for (size_t i = 1; i <= height; i++)
    {
        int j=i;
        while (j--)
        {
            cout<<'*'<<' ';
        }
        cout<<endl;
    }
    
    return 0;
}