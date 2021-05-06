#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    char arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    // cout<<arr[2][0];return 0;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout<<arr[i][j];
    //     }
    //     cout<<endl;
    // }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 && j == 0) //first corner
            {
                char a = arr[i][j + 1];
                char b = arr[i + 1][j];
                int size{0};
                if (a == 'o')
                    size++;
                if (b == 'o')
                    size++;

                if ((size & 1))
                {
                    cout << "NO";
                    // cout << "first corner";
                    return 0;
                }
            }
            else if (i == 0 && j == n - 1) //second corner
            {
                char a = arr[i][j - 1];
                char b = arr[i + 1][j];
                int size{0};
                if (a == 'o')
                    size++;
                if (b == 'o')
                    size++;
                if ((size & 1))
                {
                    cout << "NO";
                    // cout << "second corner";
                    return 0;
                }
            }
            else if (i == n - 1 && j == 0) //third corner
            {
                // cout << n << ' ' << i << endl;
                char a = arr[i - 1][j];
                char b = arr[i][j + 1];
                // cout<<a<<' '<<b<<endl;

                // cout<<arr[i][j]<<endl;
                int size{0};
                if (a == 'o')
                    size++;
                if (b == 'o')
                    size++;

                if ((size & 1))
                {
                    cout << "NO";
                    // cout << "third corner";
                    return 0;
                }
            }
            else if (i == n - 1 && j == n - 1) //fourth corner
            {
                char a = arr[i][j - 1];
                char b = arr[i - 1][j];
                int size{0};
                if (a == 'o')
                    size++;
                if (b == 'o')
                    size++;
                if ((size & 1))
                {
                    cout << "NO";
                    // cout << "fourth corner";
                    return 0;
                }
            }

            else if (i == 0) //first row
            {
                char a = arr[i][j - 1];
                char b = arr[i + 1][j];
                char c = arr[i][j + 1];
                int size{0};
                if (a == 'o')
                    size++;
                if (b == 'o')
                    size++;
                if (c == 'o')
                    size++;
                if ((size & 1))
                {
                    cout << "NO";
                    // cout << "first row";
                    return 0;
                }
            }
            else if (i == n - 1) //last row
            {
                char a = arr[i][j - 1];
                char b = arr[i - 1][j];
                char c = arr[i][j + 1];
                int size{0};
                if (a == 'o')
                    size++;
                if (b == 'o')
                    size++;
                if (c == 'o')
                    size++;
                if ((size & 1))
                {
                    cout << "NO";
                    // cout << "last row";
                    return 0;
                }
            }
            else if (j == 0) //first column
            {
                char a = arr[i - 1][j];
                char b = arr[i][j + 1];
                char c = arr[i + 1][j];
                int size{0};
                if (a == 'o')
                    size++;
                if (b == 'o')
                    size++;
                if (c == 'o')
                    size++;
                if ((size & 1))
                {
                    cout << "NO";
                    // cout << "first column";
                    return 0;
                }
            }
            else if (j == n - 1) //last column
            {
                char a = arr[i - 1][j];
                char b = arr[i][j - 1];
                char c = arr[i + 1][j];
                int size{0};
                if (a == 'o')
                    size++;
                if (b == 'o')
                    size++;
                if (c == 'o')
                    size++;
                if ((size & 1))
                {
                    cout << "NO";
                    // cout << "last column";
                    return 0;
                }
            }
            else //middle element
            {
                char a = arr[i - 1][j];
                char b = arr[i + 1][j];
                char c = arr[i][j - 1];
                char d = arr[i][j + 1];
                int size{0};
                if (a == 'o')
                    size++;
                if (b == 'o')
                    size++;
                if (c == 'o')
                    size++;
                if (d == 'o')
                    size++;
                if ((size & 1))
                {
                    cout << "NO";
                    // cout << " middle";
                    return 0;
                }
            }
        }
    }
    cout << "YES";
    return 0;
}