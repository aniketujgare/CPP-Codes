//https://www.codechef.com/JAN21C/problems/WIPL
#include <bits/stdc++.h>
using namespace std;
int tower(int a[], int N, int K)
{
    int sum = 0;
    int no_elements = 0;
    int tower = 0;

    for (int i = 0; i < N; i++)
    {
        sum += a[i];
        no_elements++;
        if (sum >= K)
        {
            if (tower == 0)
            {
                sum = 0;
                tower++;
            }
            else
                return no_elements;
        }
    }
       return -1;
}
int main()
{
    int t;
    cin >> t;

    int N, K;
    while (t--)
    {
        cin >> N >> K;
        int a[N];

        for (int i = 0; i < N; i++)
            cin >> a[i];
        sort(a, a + N, greater<int>());
        cout<<tower(a,N,K)<<endl;
    }
}
