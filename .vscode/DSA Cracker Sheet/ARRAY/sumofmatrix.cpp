// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    vector<vector<int>> sumMatrix(const vector<vector<int>> &A, const vector<vector<int>> &B)
    {
        vector<vector<int>> ans;
        
        int r1 = A.size();
        int c2 = B[0].size();

        for (int i = 0; i < r1; i++)
        {
            vector<int>temp;
            for (int j = 0; j < c2; j++)
            {   
                int sum =0;
                for (int k = 0; k < r1; k++)
                {
                    ans[i][j]+= A[i][k] * B[k][j];
                }
                temp.push_back(sum);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int row, col;
        cin >> row >> col;
        vector<vector<int>> A(row);
        for (int i = 0; i < row; i++)
        {
            A[i].assign(col, 0);
            for (int j = 0; j < col; j++)
            {
                cin >> A[i][j];
            }
        }
        cin >> row >> col;
        vector<vector<int>> B(row);
        for (int i = 0; i < row; i++)
        {
            B[i].assign(col, 0);
            for (int j = 0; j < col; j++)
            {
                cin >> B[i][j];
            }
        }
        Solution ob;
        vector<vector<int>> result = ob.sumMatrix(A, B);
        if (result.size() == 0)
            cout << "-1";
        else
        {
            for (int i = 0; i < result.size(); ++i)
            {
                for (int j = 0; j < result[0].size(); ++j)
                {
                    cout << result[i][j] << " ";
                }
            }
        }
        cout << endl;
    }
    return 0;
} // } Driver Code Ends