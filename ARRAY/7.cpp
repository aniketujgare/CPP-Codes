// Find Union and Intersection of two sorted arrays

#include <iostream>
using namespace std;

void aUnionb(int A[], int B[], int a, int b)
{
    // Making array A is smaller arrey
    if (a > b)
    {
        int *tempp = A;
        A = B;
        B = tempp;

        int temp = a;
        a = b;
        b = temp;
    }

    // Printing B array
    for (int i = 0; i < b; i++)
    {
        cout << B[i] << " ";
    }
    // printing elements of A which were not present in B
    for (int i = 0; i < a; i++)
    {
        int temp = 0;
        for (int j = 0; j < b; j++)
        {
            if (A[i] == B[j])
            {
                temp++;
            }
        }
        if (temp == 0)
            cout << A[i] << " ";
    }
    cout<<endl;
}

void aIntersectionB(int A[], int B[], int a, int b)
{
    // Making array A is smaller arrey
    if (a > b)
    {
        int *tempp = A;
        A = B;
        B = tempp;

        int temp = a;
        a = b;
        b = temp;
    }
    
    for (int i = 0; i < b; i++)
    {
        int temp = 0;
        for (int j = 0; j < a; j++)
        {
            if (B[i] == A[j])
            {
                temp++;
            }
        }
        if (temp > 0)
            cout << B[i] << " ";
    }
}
int main()
{
    int A[]{1, 2, 3, 4, 5};
    int B[]{1, 2, 3};

    int a = sizeof(A) / sizeof(A[0]);
    int b = sizeof(B) / sizeof(B[0]);

    aUnionb(A, B, a, b);

    aIntersectionB(A, B, a, b);

    return 0;
}