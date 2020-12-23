// C++ program to print all
// three-primes smaller than
// or equal to n without using
// extra space
#include <bits/stdc++.h>
using namespace std;

int numbersWith3Divisors(int);
bool isPrime(int);

// Generates all primes upto n and
// prints their squares
int numbersWith3Divisors(int n)
{
    int count=0;
	cout << "Numbers with 3 divisors : "
		<< endl;

	for(int i = 2; i*i <= n; i++)
	{
		
		// Check prime
		if (isPrime(i))
		{
			if (i * i <= n)
			{
				
				count++;
			}
		}
	}

    return count;
}

// Check if a number is prime or not
bool isPrime(int n)
{
	if (n == 0 || n == 1)
		return false;
		
	for(int i = 2; i  <=sqrt(n); i++)
	{
		if (n % i == 0)
			return false;
	}
	return true;
}

// Driver code
int main()
{
	int n = 999999;

	cout<<numbersWith3Divisors(n)<<endl;

	return 0;
}

// This code is contributed by vishu2908
