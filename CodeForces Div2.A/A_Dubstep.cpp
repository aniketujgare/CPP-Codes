#include <bits/stdc++.h>
using namespace std;

/*
 *Find all positions of the a SubString in given String
 */
void findAllOccurances(vector<size_t> &vec, string data, string toSearch)
{
    // Get the first occurrence
    size_t pos = data.find(toSearch);
    // Repeat till end is reached
    while (pos != string::npos)
    {
        // Add position to the vector
        vec.push_back(pos);
        // Get the next occurrence from the current position
        pos = data.find(toSearch, pos + toSearch.size());
    }
}
int main()
{
    vector<size_t> vec;
    string data;
    cin >> data;
    // Get All occurrences of the 'is' in the vector 'vec'
    findAllOccurances(vec, data, "WUB");
    // cout << "All Index Position of 'is' in given string are," << endl;
    // for (size_t pos : vec)
    //     cout << pos << endl;
    string ans;
    vec.push_back(-1);
    if(vec[0]==-1)
    {
        cout<<data;
        return 0;
    }
    else
    vec.pop_back();

    if(vec[0]!=0)
    {
        ans+= data.substr(0,vec[0]);
        ans+=' ';
    }
    for (size_t i = 0; i < vec.size(); i++)
    {
        if (vec[i+1] - vec[i] != 3)
        {
            ans += data.substr(vec[i]+3, (vec[i+1])-(vec[i]+3));
            ans += ' ';
        }
    }
    cout << ans;
    return 0;
}