#include <iostream>
using namespace std;

double power(double, int);

int main()
{
    double num, result;
    int pow;
    char c;

    cout << "Enter the number" << endl;
    cin >> num;

    do
    {
        cout << "Do you want to enter power (y/n)?:" << endl;
        cin >> c;

        if (c == 'y')
        {
            cout << "Enter the power to be raised:" << endl;
            cin >> pow;
            result = power(num, pow);
        }
        else
        {
            if (c == 'n')
            {
                pow = 2;
                result = power(num, pow);
            }
            else
            {
                cout << "Invalid choice" << endl;
            }
        }

    } while (c != 'y' && c != 'n');

    cout << num << "^" << pow << "(" << num << " raised to power " << pow << ")= " << result;

    return 0;
}
double power(double num, int pow)
{
    double r = 1;
    if (pow < 0)
        r = 1 / power(num, pow);
    else
    {
        for (int i = 1; i <= pow; i++)
        {
            r = r * num;
        }
    }
    return r;
}

// Output:-

// Enter the number
// 5
// Do you want to enter power (y/n)?:
// y
// Enter the power to be raised:
// 4
// 5^4(5 raised to power 4)= 625