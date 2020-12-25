// { Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


//User function Template for C++

/*  function to find position of first set 
    bit in the given number
 * n: given input for which we want to get
      the position of first set bit
 */
 string decToBinary (int d)
 {
     string b;
     while(d!=0)
     {
         b += (d % 2 ? '1':'0');
         d=d/2;
     }
     reverse(b.begin(),b.end());
     return b;
 }
unsigned int getFirstSetBit(int n){
    
    string s = decToBinary (n);
    int count=0;
    for(int i = s.length()-1; i>= 0; i--)
    {
        if(s[i]=='0')
            count ++;
        else return (count +1);
        
    }
    return 0;
    
}

// { Driver Code Starts.

// Driver code
int main()
{
        int n;
        cin>>n; //input n
        printf("%u\n", getFirstSetBit(n)); // function to get answer
	return 0;
}
  // } Driver Code Ends