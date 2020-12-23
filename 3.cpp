// Input Format

// You will be given two positive integers,  and  (), separated by a newline.

// Output Format

// For each integer  in the interval  :

// If , then print the English representation of it in lowercase. That is "one" for , "two" for , and so on.
// Else if  and it is an even number, then print "even".
// Else if  and it is an odd number, then print "odd".
// Note: 

// Sample Input

// 8
// 11
// Sample Output

// eight
// nine
// even
// odd


#include <iostream>
#include <cstdio>
using namespace std;

int main()
{

    int a, b;
    cin >>a>>b;

    for (int i = a; i<= b; i++)
    {
        if (i >= 1 && i <= 9)
        {
            switch (i)
            {
            case 1:
                printf("one\n");
                break;
            case 2:
                printf("two\n");
                break;
            case 3:
                printf("three\n");
                break;
            case 4:
                printf("four\n");
                break;
            case 5:
                printf("five\n");
                break;
            case 6:
                printf("six\n");
                break;
            case 7:
                printf("seven\n");
                break;
            case 8:
                printf("eight\n");
                break;
            case 9:
                printf("nine\n");
                break;
            }
        }
        else
        {
            if (i % 2 == 0)
                cout << "even" << endl;
            else
                cout << "odd" << endl;
        }
    }

    return 0;
}