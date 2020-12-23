#include <iostream>
using namespace std;
int main()
{
       double n1, n2, ans;
       char oper, ch;
       do
       {
              cout << "\nEnter first number, operator, second number : ";
              cin >> n1 >> oper >> n2;
              switch (oper)
              {
              case '+':
                     ans = n1 + n2;
                     break;
              case '-':
                     ans = n1 - n2;
                     break;
              case '*':
                     ans = n1 * n2;
                     break;
              case '/':
                     ans = n1 / n2;
                     break;
              default:
                     ans = 0;
              }
              cout << "Answer = " << ans;
              cout << "\nDo Another(Y/N)\n";
              cin >> ch;
       } while (ch != 'n');
       return 0;
}

OUTPUT :-
Enter first number, operator, second number : 10/3
Answer = 3.33333
Do Another(Y/N)
y

Enter first number, operator, second number : 12+100
Answer = 112
Do Another(Y/N)
n