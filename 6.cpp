// You'll be given an array of  integers and you have to print the integers in the reverse order.

// Input Format

// The first line of the input contains ,where  is the number of integers.The next line contains  integers separated by a space.

// Constraints


// , where  is the  integer in the array.

// Output Format

// Print the  integers of the array in the reverse order in a single line separated by a space.

// Sample Input

// 4
// 1 4 3 2
// Sample Output

// 2 3 4 1


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    int arr[n]; 

    // using range based for loop
    for (int i = 0; i < n; i++)
    {
        cin>> arr[i];
    }
    
    for ( int i = n-1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
    

    return 0;
}
