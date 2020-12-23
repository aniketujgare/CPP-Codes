// Reverse the array

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int array[] {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(array) / sizeof(array[0]);
    n--;
    int arr[n] {};
    int j = 0;

    for(int i=n ; i>=0; i--)
    {
        arr[j]=array[i];
        j++;
    }
     for(int i=0; i<n+1; i++)
     {
         cout<<arr[i]<<" ";
     }
    return 0;
}