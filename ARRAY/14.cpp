// { Driver Code Starts
#include <iostream>
using namespace std;

// Position this line where user code will be pasted.

int equilibriumPoint(long long a[], int n);

int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }

        //calling equilibriumPoint() function
        cout << equilibriumPoint(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends


// Function to find equilibrium point
// a: input array
// n: size of array

int equilibriumPoint(long long a[], int n) 
{   
    //Total Sum of array
    long long totalSum =0;
    for(int i=0; i<n; i++)
    {
        totalSum+=a[i];
            cout<<"total sum is"<<totalSum<<endl;

    }
    // Checking
    long long leftSum=0;
    long long rightSum = totalSum;
    for(int i=1; i<n-1; i++)
    {
        leftSum+=a[i-1];
        cout<<leftSum<<" "<<rightSum<<endl;
        if(leftSum == rightSum+a[i])
            return i;

        rightSum = totalSum-a[0]-a[i];
    }
    return -1;
}