#include<iostream>
#include<bitset>

using namespace std;
int main()
{
    int decimal = 15;
    bitset<32> bs1(decimal);
    // cout<<bs1<<endl;
    
    string s = bs1.to_string();
    string::iterator it = s.begin();

    for (int i =1; i<s.length();i++)
    {
        if(s[i-1]=='0' && s[i]=='1')
            s.erase(s.begin(),it+i);
    }
    for(auto a:s)
     cout<<a;

}