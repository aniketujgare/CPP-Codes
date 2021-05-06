#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int c = a + b;

    string sa = to_string(a);
    string sb = to_string(b);
    string sc = to_string(c);
    sa.erase(std::remove(sa.begin(), sa.end(), '0'), sa.end());
    sb.erase(std::remove(sb.begin(), sb.end(), '0'), sb.end());
    sc.erase(std::remove(sc.begin(), sc.end(), '0'), sc.end());
    // cout<<sa<<endl<<sb<<endl<<sc<<endl;
    a = stoi(sa);
    b = stoi(sb);
    c = stoi(sc);

    if(c== a+b)
    cout<<"YES";
    else cout<<"NO";
    return 0;
}