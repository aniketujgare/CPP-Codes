#include <bits/stdc++.h>
using namespace std;

void findPermutations(string, int, int);
string swap(string str, int left, int right);
int main()
{
    string str;
    cin >> str;
    //string, left bundry, right bounmdry
    findPermutations(str, 0, str.length() - 1);
    return 0;
}
void findPermutations(string str, int left, int right)
{
    if (left == right)
        cout << str << endl;
    else
    {
        for (int i = left; i <= right; i++)
        {
            //swap
            str = swap(str, left, i);
            //recur
            findPermutations(str, left + 1, right);
            //undo
            str = swap(str, left, i);
        }
    }
}
string swap(string str, int left, int right)
{
    char t;
    t = str[left];
    str[left] = str[right];
    str[right] = t;
    return str;
}
