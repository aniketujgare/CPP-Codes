#include <bits/stdc++.h>
using namespace std;

int getIndex(vector<int> &nums, int target, bool getFirst)
{
    int s = 0;
    int e = nums.size() - 1;
    int ans = -1;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;

        if (nums[mid] == target)
        {
            ans = mid;
            if (getFirst)
                e = mid - 1;
            else
                s = mid + 1;
        }
        else if (target < nums[mid])
            e = mid - 1;
        else
            s = mid + 1;
    }
    return ans;
}

vector<int> searchRange(vector<int> &num, int target)
{
    vector<int> v(2, -1);
    int first = getIndex(num, target, true);
    if (first == -1)
        return v;

    int last = getIndex(num, target, false);
    v[0] = first;
    v[1] = last;
    return v;
}

int main()
{
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int key;
    cin >> key;

    vector<int> ans = searchRange(v, key);

    cout << ans[0] << " " << ans[1];

    return 0;
}