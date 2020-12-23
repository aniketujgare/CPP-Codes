#include <iostream>
using namespace std;

int main()
{
    int a[]{1, 2, 3, 4, 5};
    for (int i = 1; i < 5; i++)
    {
        int temp = a[0];
        a[0] = a[i];
        a[i] = temp;
    }

    for(int n:a)
        cout<<n<<" ";

    return 0;
}