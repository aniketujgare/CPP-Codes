// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string convertToRoman(int);

int main()
{
    // your code goes here
    int N = 916;
    // cin >> N;

    cout << convertToRoman(N);
    cout << endl;
    return 0;
} // } Driver Code Ends

/*you are required to complete 
this function*/

// n :given number that you are require to convert
string convertToRoman(int n)
{
    int d;
    int r;
    string s;
    while (n != 0)
    {
        if (n >= 1000)
        {
            d = n / 1000;
            s.append(d, 'M');
            n = n % 1000;
        }
        if (n >= 900 && n < 1000)
        {
            d = n / 900;
            for (int i = 0; i < d; i++)
            {
                s.append(d, 'C');
                s.append(d, 'M');
            }
            n = n % 900;
        }
        else if (n >= 500 && n < 900)
        {
            d = n / 500;
            s.append(d, 'D');
            n = n % 500;
        }
        else if (n >= 400 && n < 500)
        {
            d = n / 400;
            for (int i = 0; i < d; i++)
            {
                s.append(d, 'C');
                s.append(d, 'D');
            }
            n = n % 400;
        }
        else if (n >= 100 && n < 400)
        {
            d = n / 100;
            s.append(d, 'C');
            n = n % 100;
        }
        else if (n >= 90 && n < 100)
        {
            d = n / 90;
            for (int i = 0; i < d; i++)
            {
                s.append(d, 'X');
                s.append(d, 'C');
            }
            n = n % 90;
        }
        else if (n >= 50 && n < 90)
        {
            d = n / 50;
            s.append(d, 'L');
            n = n % 50;
        }
        else if (n >= 40 && n < 50)
        {
            d = n / 40;
            for (int i = 0; i < d; i++)
            {
                s.append(d, 'X');
                s.append(d, 'L');
            }
            n = n % 40;
        }
        else if (n >= 10 && n < 40)
        {
            d = n / 10;
            s.append(d, 'X');
            n = n % 10;
        }
        else if (n >= 9 && n < 10)
        {
            d = n / 9;
            for (int i = 0; i < d; i++)
            {
                s.append(d, 'I');
                s.append(d, 'X');
            }
            n = n % 9;
        }
        else if (n >= 5 && n < 9)
        {
            d = n / 5;
            s.append(d, 'V');
            n = n % 5;
        }
        else if (n >= 4 && n < 5)
        {
            d = n / 4;
            for (int i = 0; i < d; i++)
            {
                s.append(d, 'I');
                s.append(d, 'V');
            }
            n = n % 4;
        }
        else if (n >= 1 && n < 5)
        {
            d = n / 1;
            s.append(d, 'I');
            n = n % 1;
        }
    }
    return s;
}