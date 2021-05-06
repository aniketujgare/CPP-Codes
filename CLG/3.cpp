/*Input
The first line of input contains an integer T, denoting the number of testcases. Then T test cases follow. Each test case consists of three lines. First line of each testcase contains an integer N denoting size of the array. Second line contains N space separated integer denoting elements of the array. Third line of the test case contains an integer K.

Output:
For each testcase, in a newline, print the kth smallest element.*/

#include <iostream>
using namespace std;

int main()
{
    int TestCases, NoOfElements, kThElement;
    cin >> TestCases;
    int Solutions[TestCases]{};
    int SolIndex = 0;
    int element;
    int z = sizeof(Solutions) / sizeof(Solutions[0]);

    while (TestCases > 0)
    {
        cin >> NoOfElements;
        int arr[NoOfElements]{};

        for (int n = 0; n < NoOfElements; n++)
        {
            cin >> element;
            arr[n] = element;
        }

        cin >> kThElement;
//sorting array in ascending order
        for (int i = 0; i < NoOfElements; i++)
        {
            for (int j = i + 1; j < NoOfElements; j++)
            {
                if (arr[i] > arr[j])
                {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        //storing k th smaller element in another array
        Solutions[SolIndex] = arr[kThElement-1];

        SolIndex++;
        TestCases--;
    }

    for (int e : Solutions)
    {
        cout << "\nsolutions " << e << endl;
    }

    return 0;
}