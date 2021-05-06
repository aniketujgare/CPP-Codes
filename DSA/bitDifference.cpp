// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


string decimalToBinary (int d)
{
    string b;
    while (d!=0)
    {
        b += ( d % 2 ? '1' : '0');
        d = d/2;
    }
    reverse(b.begin(), b.end());
    return b;
}
// Function to find number of bits to be flip
// to convert A to B
int countBitsFlip(int a, int b){
    
    string num1 = decimalToBinary (a);
    string num2 = decimalToBinary (b);
    if(num1.length()<num2.length())
    {
        num1.insert(0,num2.length()-num1.length(),'0');
    }
    else
    {
        num2.insert(0,num1.length()-num2.length(),'0');
    }
    int count=0;
    cout<<num1<<endl;cout<<num2<<endl;
    for (int i=0;i<num1.length();i++)
    {
        if(num1[i]!=num2[i])
        {
            num1[i] = num2[i];
            count++;

        }
    }
    return count;
    
}

// { Driver Code Starts.

// Driver Code
int main()
{
		int a,b;
		cin>>a>>b; //input a and b
		cout<<countBitsFlip(a, b)<<endl;
	return 0;
}  // } Driver Code Ends