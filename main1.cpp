#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;
    string s1 = "SUVO";
    string s2 = "SUVOJIT";
    while (t--)
    {
        int c1{0},c2{0}; 
        string str; cin>>str;

        //FInding SUVO
        size_t  found = str.find(s1);
        while(found!=string::npos){
            c1++;
            found = str.find(s1, found+1);
        }

        //FInding SUVOJIT
        found = str.find(s2);
        while(found!=string::npos){
            c2++;
            found = str.find(s2, found+1);
            // cout<<str<<t<<endl;
        }
        
        
        
        cout<<"SUVO = "<< c1-c2<<',' << " SUVOJIT = " <<c2<<endl;
    }

    return 0;
}