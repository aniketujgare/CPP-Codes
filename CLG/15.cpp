#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v{ 10, 20, 30, 40, 50 }; 

    vector<int>::iterator upper1, upper2; 

    // std :: upper_bound 
    upper1 = upper_bound(v.begin(), v.end(), 35); 
    int i = upper1 - v.begin();
    cout << "\nUpper_bound for element 35 is at position : " << i; 


    return 0; 
}