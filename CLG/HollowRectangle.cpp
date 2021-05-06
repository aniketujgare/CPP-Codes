#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row, col;
    cin >> row >> col;
    for (size_t j = 0; j < col; j++)
    {
        if (j == 0 || j == col - 1)
        {
            for (size_t i = 0; i < row; i++)
            {
                cout<< '*'<< " ";
            }
            cout<<endl;
        }
        else
        {
            cout<<'*';
            for (size_t i = 0; i < row-1; i++)
            {
                cout<<' '<<' ';
            }
            cout<<'*';
            cout<<endl;
        }
        
    }

    return 0;
}