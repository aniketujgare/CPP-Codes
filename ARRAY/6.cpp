#include <iostream>
using namespace std;


void aUnionB(int A[], int B[], int a, int b)
{
    int n = a + b;
    int aUb[n]{0}; // n is max num of elements aUb can have

    // filling elements of a in aUb
    for (int i = 0; i < a; i++)
    {
        aUb[i] = A[i];
    }

    int z = sizeof(aUb) / sizeof(aUb[0]);
    int temp = z;
    // compare element from set B with aUb and if not fount add it in aUb
    for (int i = 0; i < z; i++)
    {
        for (int j = 0; j < b; j++)
        {
            if (aUb[i] == B[j])
            {
                continue;
            }
            else
            {
                aUb[temp] = B[j];
                temp++;
            }
        }
    }
    // print a union b
    for (int i : aUb)
    {
        cout << i << " ";
    }
}

int main()
{
    int TestCases = 1, NoOfElementsInA, NoOfElementsInB, element;
    //cin >> TestCases;

    while (TestCases--)
    {
        cin >> NoOfElementsInA >> NoOfElementsInB;
        int A[NoOfElementsInA], B[NoOfElementsInB];

        //assigning elements in array A
        for (int i = 0; i < NoOfElementsInA; i++)
        {
            cin >> element;
            A[i] = element;
        }
        //assigning elements in array B
        for (int i = 0; i < NoOfElementsInB; i++)
        {
            cin >> element;
            B[i] = element;
        }

        aUnionB(A, B, NoOfElementsInA, NoOfElementsInB);
    }
    return 0;
}