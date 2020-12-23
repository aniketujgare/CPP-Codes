// Given a positive integer denoting , do the following:

// If , then print the lowercase English word corresponding to the number (e.g., one for , two for , etc.).
// If , print Greater than 9.
// Input Format

// A single integer denoting .

// Constraints

// Output Format

// If , then print the lowercase English word corresponding to the number (e.g., one for , two for , etc.); otherwise, print Greater than 9 instead.

// Sample Input 0

// 5
// Sample Output 0

// five
// Explanation 0

// five is the English word for the number .

// Sample Input 1

// 8
// Sample Output 1

// eight
// Explanation 1

// eight is the English word for the number .

// Sample Input 2

// 44
// Sample Output 2

// Greater than 9

#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    switch (n)
    {
    case 1:
        printf("one");
        break;
    case 2:
        printf("two");
        break;
    case 3:
        printf("three");
        break;
    case 4:
        printf("four");
        break;
    case 5:
        printf("five");
        break;
    case 6:
        printf("six");
        break;
    case 7:
        printf("seven");
        break;
    case 8:
        printf("eight");
        break;
    case 9:
        printf("nine");
        break;

    default:
        printf("Greater than 9");
        break;
    }

    return 0;
}
