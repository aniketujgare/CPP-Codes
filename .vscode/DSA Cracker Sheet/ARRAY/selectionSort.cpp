#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (size_t i = 0; i < n; i++)
        cin >> arr[i];

    //Sorting selection
    for (size_t i = 0; i < n - 1; i++)
    {
        for (size_t j = i+1; j < n; j++)
        {
            if(arr[j]<arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(size_t e:arr)
        cout<<e<<" ";
    return 0;
}