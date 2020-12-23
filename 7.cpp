#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


// int main ()
// {
//     int n,q;
//     cin>>n>>q;
//     vector<int>* a;
//     a= new vector<int>[n];
//     for (int i = 0; i < n ; i++)
//     {
//         int r;
//         cin>>r;
//         for (int j = 0; j < r ; j++)
//         {   int k;
//             cin>>k;
//             a[i].push_back(k);
//             a[p].i;
//         }
//     }
    
//     int r,s;
//     cin>>r>>s;
//     for (int i = 0; i < q; i++)
//     {
//         cout<<a[r][s]<<endl;
//     }
    

// }




int main() 
{
    int n, q;
    cin >> n >> q;
    vector<int>* a;
    a= new vector<int>[n];
    int p;
    int k;
    for (p = 0;p < n;p++) {
        cin >> k;
        for (int i = 0; i < k; i++) {
            int o;
            cin >>o;
            a[p].push_back(o);
            a[p].p;
        }
    }
    int r, s;
    for (p = 0;p < q;p++)
    {
        cin >> r >> s;
        cout << a[r][s]<<endl;
    }
    return 0;

}