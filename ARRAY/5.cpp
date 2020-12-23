/*An array contains both positive and negative numbers in random order. Rearrange the array elements so that all negative numbers appear before all positive numbers.
Examples : 

Input: -12, 11, -13, -5, 6, -7, 5, -3, -6
Output: -12 -13 -5 -7 -3 -6 11 6 5 */

#include <iostream>
using namespace std;

int main()
{
    int arr[]{-12, 11, -13, -5, 6, -7, 5, -3, -6};
    int n = sizeof(arr)/sizeof(arr[0]);

    // sorting array in ascending order
    for(int i=0; i<n;i++){
        for(int j=i+1; j<n; j++)
        {
            if(arr[i]>0){
            int temp = arr[i];
            arr[i]= arr[j];
            arr[j]= temp;
            }
        }


    }
    for (int e:arr)
        cout<<e<<" ";
    return 0;
}