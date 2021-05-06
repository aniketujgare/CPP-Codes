#include <bits/stdc++.h>
using namespace std;

bool checkPal(int a[],int s, int e)
{
    if(s>e)
        return true;
    
    if(a[s]==a[e])
        return checkPal(a,s+1,e-1);

    return false;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout<<checkPal(arr,0,n-1);
    
    return 0;
}