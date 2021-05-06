#include <bits/stdc++.h>
using namespace std;

void printCircularArr(int n, int a[], int ind)
{
/*
    // Create an auxiliary array of twice size.
    int arrB[2*n];
    // Copy a[] to b[] two times 
    for (size_t i = 0; i < n; i++)
        arrB[i]=arrB[n+i]=a[i];
    // print from ind-th index to (n+i)th index.
    for (size_t i = ind; i < n+ind; i++)
        cout<<arrB[i]<<" ";
    // This approach takes of O(n) time but takes extra space of order O(n)
*/

    //without using any extra space
    for (size_t i = ind; i < n+ind; i++)
        cout<<a[i%n]<<" ";

}
int main()
{
    int noOfElements;
    cin >> noOfElements;
    int arr[noOfElements];
    for (size_t i = 0; i < noOfElements; i++)
        cin >> arr[i];
    printCircularArr(noOfElements,arr,3);
    return 0;

} 