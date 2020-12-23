// Input Format

// A single line of text denoting  (the variable whose contents must be printed).

// Output Format

// Print Hello, World. on the first line, and the contents of  on the second line.

// Sample Input

// Welcome to 30 Days of Code!
// Sample Output

// Hello, World. 
// Welcome to 30 Days of Code!
// Explanation

// On the first line, we print the string literal Hello, World.. On the second line, we print the contents of the  variable which, for this sample case, happens to be Welcome to 30 Days of Code!. If you do not print the variable's contents to stdout, you will not pass the hidden test case.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    // Declare a variable named 'input_string' to hold our input.
    string input_string; 
    
    // Read a full line of input from stdin (cin) and save it to our variable, input_string.
    getline(cin, input_string); 
    
    // Print a string literal saying "Hello, World." to stdout using cout.
    cout << "Hello, World." << endl;
    cout << input_string << endl;

    // TODO: Write a line of code here that prints the contents of input_string to stdout.

    return 0;
}