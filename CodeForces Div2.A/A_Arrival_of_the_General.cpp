#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, min = INT_MAX, max =INT_MIN;
    cin>>n;
    int a[n];
    int minIndex,maxIndex;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        if(a[i]<=min)
        {
            min =a[i];
            minIndex = i;
        }
        if(a[i]>max)
        {
            max =a[i];
            maxIndex = i;
        }
    }
    // cout<<maxIndex<<" "<<minIndex<<endl;
    int swapCnt =0;
    while (maxIndex)
    {
        swapCnt++;
        if((maxIndex-1)==minIndex)
        minIndex++;
        maxIndex--;
    }
    // cout<<minIndex<<" "<<n-1<<" ";
    while (minIndex<n-1)
    {
       // cout<<"reach";
        swapCnt++;
        minIndex++;
    }
    // cout<<minIndex;
    cout<<swapCnt;
    
    
    return 0;
}