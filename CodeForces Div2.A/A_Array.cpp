#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> positive, negative, zero;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x < 0)
            negative.push_back(x);
        if (x > 0)
            positive.push_back(x);
        if (x == 0)
            zero.push_back(x);
    }
    if ((negative.size() & 1) == 1 && positive.size() == 0) // -ve even
    {
        
        positive.push_back(negative.back());
        negative.pop_back();
        positive.push_back(negative.back());
        negative.pop_back();
    }
    else if ((negative.size() & 1) != 1 && (positive.size() & 1) != 1 && positive.size() != 0)
    {   
        zero.push_back(negative.back());
        negative.pop_back();
    }
    else if ((negative.size() & 1) != 1 && (positive.size() & 1) == 1)
    {
        zero.push_back(negative.back());
        negative.pop_back();
    }
    else if ((negative.size() & 1) != 1 && positive.size() == 0)
    {
        positive.push_back(negative.back());
        negative.pop_back();
        positive.push_back(negative.back());
        negative.pop_back();
        zero.push_back(negative.back());
        negative.pop_back();
    }
    // cout << "negative = " << negative.size() << endl;
    // cout << "positive = " << positive.size() << endl;
    // cout << "zeros = " << zero.size() << endl;

    
    cout << negative.size() << ' ';
    for (int i = 0; i < negative.size(); i++)
    {
        cout << negative.at(i) << ' ';
    }
    cout << endl;

    cout << positive.size() << ' ';
    for (int i = 0; i < positive.size(); i++)
    {
        cout << positive.at(i) << ' ';
    }
    cout << endl;

    cout << zero.size() << ' ';
    for (int i = 0; i < zero.size(); i++)
    {
        cout << zero.at(i) << ' ';
    }

    return 0;
}