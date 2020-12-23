// Maximum and minimum of an array using minimum number of comparisons
#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int min = INT_MAX;
    int max = INT_MIN;
    int arr[] { 1000, 11, 445, 1, 330, 3000 };

    for (int i: arr)
    {
        if (i > max)
            max = i;
        if (i < min)
            min = i;
    }

    cout<<"Minimum element is: "<<min<<"\n"<<"Maximum element is: "<<max;

    return 0;
}