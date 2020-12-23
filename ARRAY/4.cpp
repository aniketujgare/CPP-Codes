/*Given an array of size N containing 0s, 1s, and 2s; sort the array in ascending order.

Input:
First line of input contains number of testcases T. For each testcase, there will be two lines, first of which will contain N. The second lines contains the elements of the array.

Output: 
Print sorted array.
Your Task:
Complete the function sort012() that takes array and n and sorts the array in place. 

Constraints: 
1 <= T <= 50
1 <= N <= 10^5
0 <= A[i] <= 2

Example:
Input :
2
5
0 2 1 2 0
3
0 1 0

Output:
0 0 1 2 2
0 0 1

Explanation:
Testcase 1: After segragating the 0s, 1s and 2s, we have 0 0 1 2 2 which shown in the output.*/

#include <iostream>
using namespace std;

 void printArr(int arr[],int n)
 {
    for (int i = 0; i < n; i++) 
        cout << arr[i] << " "; 
 }
void sort012(int a[] , int n)
{
    int zeros{0}, ones{0}, twos{0};
    for(int i =0; i<n; i++) 
    {
        switch (a[i])
        {
        case 0:
            zeros++;
            break;
        
        case 1:
            ones++;
            break;
        case 2:
            twos++;
            break;
        }
    }
    int i=0;
    //store all elements
    while (zeros>0)
    {
        a[i++]=0;
        zeros--;;
    }
    while (ones>0)
    {
        a[i++]=1;
        ones--;;
    }
    while (twos>0)
    {
        a[i++]=2;
        twos--;;
    }
    printArr(a,n);

}

int main()
{
    int TestCases=1, NoOfElements,element;
    cin>>NoOfElements;
    int arr[NoOfElements];

    while(TestCases--)
    {
    for(int i=0; i<NoOfElements;i++)
    {
        cin>>element;
        arr[i] = element; 
    }
    
    sort012(arr, NoOfElements);
    }
    
    return 0;
}