// Given an array arr of N integers. Find the contiguous sub-array with maximum sum

#include <iostream>
#include<algorithm>
using namespace std;


int main()
{
    int N =8;
    int arr[]{-2, -3, 4, -1, -2, 1, 5, -3};

    int maxHere = arr[0];
    int maxTill = arr[0];

    for(int i=1; i<N; i++)
    {
        maxHere = max(arr[i],maxHere+arr[i]);
        
        maxTill = max(maxHere,maxTill);
        
    }
    cout<<maxTill;

    return 0;
}