#include <bits/stdc++.h>
using namespace std;

void printSubs(string input, string output)
{
    if (input.length() == 0)
    {
        cout << output << endl;
        return;
    }
    // Exclude Choice
    printSubs(input.substr(1), output);
    // Include Choice
    printSubs(input.substr(1), output + input[0]);
}

void printSubs2(char input[], char output[], int i)
{
    if (input[0] == '\0')
    {
        output[i] = '\0';
        cout << output << endl;
        return;
    }
    // Exclude Choice
    printSubs2(input + 1, output, i);

    // Include Choice
    output[i] = input[0];
    printSubs2(input + 1, output, i + 1);
}

int main()
{

    { // For printSubs using string
        string input;
        cin >> input;
        string output = "";

        printSubs(input, output);
        cout << output;
    }

    // For printSubs2 using char array
    char input[] = "abc";
    char output[100];
    printSubs2(input, output, 0);
    cout << output;

    return 0;
}