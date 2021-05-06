#include <bits/stdc++.h>
using namespace std;

void remDuplictes(char input[])
{
    if (input[0] == '\0')
        return;

    if (input[0] == input[1])
    {
        for (int i = 0; input[i] != '\0'; i++)
            input[i] = input[i + 1];

        remDuplictes(input);
    }
    remDuplictes(input + 1);
}

int main()
{
    char input[] = "aaabbcdefaabc";

    remDuplictes(input);
    cout << input;

    return 0;
}