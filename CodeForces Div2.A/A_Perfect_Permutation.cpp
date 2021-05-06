#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n%2!=0)
    {
        cout<<-1; return 0;
    }
    vector<int> ans;
    for (int i = 1; i < n/2+1; i++)
    {
        ans.push_back(i*2);
        ans.push_back(2*i-1);
    }
    for(int a:ans)
    cout<<a<<' ';
    return 0;
}