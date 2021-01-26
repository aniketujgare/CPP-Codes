//https://www.codechef.com/JAN21C/problems/BILLRD
#include <bits/stdc++.h>
using namespace std;
void lower(int N, int K, int x, int y)
{
    int collision = 0;
    while (K--)
    {

        if (x < N && y < N && collision % 4 == 0)
        {
            // cout << "before loop 1(" << x << "," << y << ")" << endl;
            // cout << "Loop 1" << endl;
            while (x != N)
            {
                x++;
                y++;
                // cout << "(" << x << "," << y << ")" << endl;


            }
            if (x == N && y == N)
                break;
        }

        else if (x == N && y < N)
        {
            // cout << "before loop 2 (" << x << "," << y << ")" << endl;
            // cout << "Loop 2" << endl;
            while (y != N)
            {
                x--;
                y++;
                // cout << "(" << x << "," << y << ")" << endl;

            }
            if (x == 0 && y == N)
                break;
        }

        else if (y == N && x < N)
        {
            // cout << "Loop 3" << endl;
            while (x != 0)
            {
                x--;
                y--;

            }
            if (x == 0 && y == 0)
                break;
        }
        else if (x == 0 && y < N)
        {
            // cout << "Loop 4" << endl;
            while (y != 0)
            {
                x++;
                y--;

            }
            if (x == N && y == 0)
                break;
        }
        collision++;
    }
    cout << x << " " << y << endl;
}
void upper(int N, int K, int x, int y)
{
    int collision = 0;
    while (K--)
    {

        if (x < N && y < N && collision % 4 == 0)
        {
            // cout << "before loop 1(" << x << "," << y << ")" << endl;
            // cout << "Loop 1" << endl;
            while (y != N)
            {
                x++;
                y++;
                // cout << "(" << x << "," << y << ")" << endl;

            }
        }

        else if (x == N && y < N)
        {
            // cout << "before loop 2 (" << x << "," << y << ")" << endl;
            // cout << "Loop 2" << endl;
            while (y != 0)
            {
                x--;
                y--;
                // cout << "(" << x << "," << y << ")" << endl;
            }
        }

        else if (y == N && x < N)
        {
            // cout << "Loop 3" << endl;
            while (x != N)
            {
                x++;
                y--;
            }
        }
        else if (y == 0 && x < N)
        {
            // cout << "Loop 4" << endl;
            while (x != 0)
            {
                x--;
                y++;

            }
        }
        collision++;
    }
    cout << x << " " << y << endl;
}
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int N, K, x, y;
        cin >> N >> K >> x >> y;
        if (x > y || x == y)
        {
            lower(N, K, x, y);
        }
        else
        {
            upper(N, K, x, y);
        }
        
    }
    // cout << "programme end";
    return 0;
}