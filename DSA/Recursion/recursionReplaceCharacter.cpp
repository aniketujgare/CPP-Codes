#include <bits/stdc++.h>
using namespace std;

void replaceChar(char input[], char a, char x)
{
    if (input[0] == '\0')
        return;
    if (input[0] == a)
        input[0] = x;
    replaceChar(input + 1, a, x);
}

int main()
{
    char input[] = "astrazenca";
    char a, x;
    cin >> a >> x;

    replaceChar(input, a, x);

    cout << input;

    return 0;
}