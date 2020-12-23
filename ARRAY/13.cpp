#include <bits/stdc++.h>
using namespace std;
#include<string>
void subarraySum(int arr[], int n, int s){
    
    long long sum=0;
    int l=0;
    for (int i=0; i<n; i++)
    {
        sum = sum+arr[i];
        if(sum>s)
            sum = sum- arr[l++];
        if (sum==s)
        {
           cout<<l+1<<" "<<i+1<<endl;
           return;
        }
            
    }
    cout<<"-1";
    
}
    int main(){
    string str1="gbg";
    cout << str1 << '\n';
    }
