#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string str;
        cin>>str;

        if(str.length()>10)
        {
            string ans;
            ans+= str[0];
            ans+= to_string(str.length()-2);
            ans+= str[str.length()-1];
            cout<<ans<<endl;
        }
        else
        {
            cout<<str<<endl;
        }
    }
    
    return 0;
}