#include <bits/stdc++.h>
using namespace std;
string isBalanced(string s)
{
    unordered_map<char,int> symbol = {{'(', -1},{'{', -2},{'[',-3},{')', 1},{'}', 2},{']',3}};
    stack<char> st;

    for(char bracket:s)
    {
        if(symbol[bracket]<0)//opening bracket
        {
            st.push(bracket);
        }
        else
        {
            if(st.empty()) return "NO";
            if(symbol[bracket]+symbol[st.top()]!=0) return "NO";
            st.pop();
        }
    }
    if(!st.empty()) return "NO";
    return "YES"; 
}
int main()
{
    string str;
    cin>>str;
    cout<<isBalanced(str)<<endl;
    return 0;
}