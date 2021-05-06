#include <bits/stdc++.h>
using namespace std;

void removeChar(char input[], char x)
{
    if (input[0] == '\0')
        return;

    if (input[0] != x)
        removeChar(input + 1, x);
    else
    {
        for (int i = 0; input[i] != '\0'; i++)
            input[i] = input[i + 1];

        removeChar(input, x);
    }
}

int main()
{
    char input[] = "astrazenca";
    char x = 'a';

    removeChar(input, x);

    cout << input << endl;

    return 0;
}