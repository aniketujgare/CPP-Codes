#include <bits/stdc++.h>
using namespace std;

int hsh[10];
int main()
{
    int n;
    for (int i = 0; i < 3; i++)
    {
        cin>>n;
        hsh[n]++;
        if (hsh[n]>=2)
        {
            cout<<"YES"<<endl;
            return 0;
        } 
    }
    cout<<"NO"<<endl;
    return 0;
}