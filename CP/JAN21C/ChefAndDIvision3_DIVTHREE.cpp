//https://www.codechef.com/JAN21C/problems/DIVTHREE
#include <iostream>
using namespace std;

int check(int n, int k, int d, int a = 0)
{
    while (n--)
    {
        int temp;
        cin >> temp;
        a += temp;
    }
    if (a < k)
    {
        return 0;
        
    }

    int r = a / k;
    while (r >= 0)
    {
        if (r <= d)
        {
            return r;
        }
        r--;
    }
    return 0;
}
int main() {
	int t, n, k, d, a = 0;
    cin >> t;
    while (t--)
    {
    cin >> n >> k >> d;
    cout<< check(n, k, d)<<endl;
    }
    return 0;
}
