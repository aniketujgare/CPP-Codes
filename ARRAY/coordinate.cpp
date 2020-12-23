#include <iostream>
using namespace std;

struct point
{
    int xCO;
    int yCO;
};

int main()
{
    point p1, p2, p3;
    cout << "\nEnter coordinate for p1: ";
    cin >> p1.xCO >> p1.yCO;
    cout << "Enter coordinate for p2: ";
    cin >> p2.xCO >> p2.yCO;
    p3.xCO = p1.xCO + p2.xCO;
    p3.yCO = p1.yCO + p2.yCO;
    cout << "coordinate of p1 + p2 are: "
         << p3.xCO << "," << p3.yCO << endl;
    return 0;
}

//  Output:-

// Enter coordinate for p1: 3 9
// Enter coordinate for p2: 4 5
// coordinate of p1 + p2 are: 7,14