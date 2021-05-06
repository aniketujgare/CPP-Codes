#include <bits/stdc++.h>
using namespace std;

int main()
{
    //n - the number of rides Ann has planned,
    //m - the number of rides covered by the m ride ticket,
    //a - the price of a one ride ticket,
    //b - the price of an m ride ticket.
    int n, m, a, b;
    cin >> n >> m >> a >> b;

    //cost per ride by m ride ticket
    double cprM = (float)b / m;
    int rideByM = 0; // trips count
    if (cprM <= a)
    {
        while (n >= m)
        {
            rideByM++;
            n = n - m;
        }
    }
    int remRideA = n * a; //cost rem if ride by a cost
    int remRideM = b; //cost rem if ride by m cost
    if (remRideM <= remRideA && n < m) // && for if cprm is more than a
    {
        rideByM++;
        n = 0;
    }
    cout << rideByM * b + n * a;

    return 0;
}