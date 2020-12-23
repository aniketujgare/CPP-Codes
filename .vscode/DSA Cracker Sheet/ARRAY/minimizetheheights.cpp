// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

//User function template for C++

class Solution
{
public:
    int getMinDiff(int arr[], int n, int k)
    {
        int min = INT_MAX, max = INT_MIN;
        int pDiff;
        vector<int> index;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] - k < 0)
            {
                arr[i] += k;
                if (arr[i] < min)
                    min = arr[i];
                if (arr[i] > max)
                    max = arr[i];
                continue;
            }
            index.push_back(i);
            
            
        }
        for(int i=0; i<n ; i++)
            cout<<arr[i]<<" ";
        pDiff = max - min;
        cout<<min<<"min - max"<<max<<endl;
        
        int a, b;
        int t1min = min, t1max = max;
        int t2min = min, t2max = max;

         for (int i = 0; i < index.size(); i++)
         {
             a = arr[index.at(i)]-k;
             b = arr[index.at(i)]+k;

             if (a<min) t1min =a;
             if (a>max) t1max =a;
             if (b<min) t2min =b;
             if (b>max) t2max =b;

             int q = t1max - t1min;
             int w = t2max - t2min;

             if(q<w)
             {
                arr[index.at(i)]-=k;
                if (arr[index.at(i)]<min && t1min<min) min =arr[index.at(i)];
                if (arr[index.at(i)]>max && t1max>max ) max =arr[index.at(i)]; 
             }
             else
             {

                arr[index.at(i)]+=k;
                if (arr[index.at(i)]<min && t2min<min  ) min =arr[index.at(i)];
                if (arr[index.at(i)]>max && t2max>max ) max =arr[index.at(i)]; 
             }
             
        }
        // for (int i=0; i<n; i++)
        //     cout<<arr[i]<<" ";
        // cout<<endl;
        
        return max - min;
    }
};

// { Driver Code Starts.
int main()
{
    int n, k;
    cin >> k;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Solution ob;
    auto ans = ob.getMinDiff(arr, n, k);
    cout << ans << "\n";
    return 0;
} // } Driver Code Ends