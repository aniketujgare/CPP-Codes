#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr1[]= {3,2,1,4,4};
    int s1 = sizeof(arr1)/sizeof(arr1[0]);
    int arr2[]= {1,4,2,3,1};
    int s2 = sizeof(arr2)/sizeof(arr2[0]);
    int oddInArr1=0, oddInArr2=0;
    for (size_t i = 0; i < s1; i++)
        if(arr1[i]&1)
        oddInArr1++;
    for (size_t i = 0; i < s2; i++)
        if(arr2[i]&1)
        oddInArr2++;
    int totalPair = s1*s2;
    int evenPair = totalPair - oddInArr1*oddInArr2;
    cout<<evenPair;
    return 0;
}