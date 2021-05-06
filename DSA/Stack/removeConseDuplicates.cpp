#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str; cin>>str;
    
    
    /* stack<char> s;

    for(int i=0;i<str.length();i++)
    {
        if(s.empty() || s.top()!=str[i] ) s.push(str[i]);
        else s.pop();
    }
    string ans ="";
    while (!s.empty())
    {
        ans+=s.top();
        s.pop();
    }
    reverse(ans.begin(),ans.end());
    cout<<ans; */

    int stptr = -1;
    for(int i=0; i<str.size();i++) 
    {
        if(stptr == -1 || str[i]!=str[stptr]) 
        {
            stptr++;
            str[stptr] = str[i];
        }
        else stptr--;
    }

    for(int i=0; i<=stptr;i++)
        cout<<str[i];
    

    return 0;
}