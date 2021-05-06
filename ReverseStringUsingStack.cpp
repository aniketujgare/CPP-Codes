#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
    stack<char> st;
    string str;
    getline(cin, str);

    for (size_t i = 0; i < str.size(); i++)
        st.push(str[i]);

    while (!st.empty())
    {
        cout << st.top();
        st.pop();
    }

    return 0;
}