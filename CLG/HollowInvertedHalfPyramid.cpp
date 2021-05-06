#include <bits/stdc++.h>
using namespace std;

int main()
{
    int height, base;
    cin >> height >> base;
    int b= base;
    for (int h = 1; h <= height; h++)
    {
        
        if(h==1)
        {
            for (; b >= 1; b--)
            {
                cout<<'*'<<' ';
            }
            cout<<endl;
        }
        else
        {
            cout<<'*'<<' ';
            for (; b >= 1; b--)
            {
                cout<<' ';
            }
            cout<<'*'<<' ';
            cout<<endl;
        }
        
    }

    return 0;
}