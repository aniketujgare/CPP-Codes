#include <iostream>
using namespace std;

int main()
{
    string s[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
        (i >= 1 && i <= 9) ? cout << s[i - 1] : (i % 2) ? cout << "odd\n" : cout << "even\n";
        
    return 0;
}

/*
alternatives to write

1) cout << ((i >= 1 && i <= 9) ? s[i-1]: (i % 2) ? "odd": "even") << "\n";
2) (i >= 1 && i <= 9) ? printf("%s\n", s[i - 1].c_str()) : (i % 2) ? printf("odd\n") : printf("even\n");

*/