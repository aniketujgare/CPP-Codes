#include <iostream>
using namespace std;

class TollBooth
{
private:
     unsigned int car;
     double money;

public:
     TollBooth() : car(0), money(0) {}
     void payingCar()
     {
          car++;
          money++;
          cout << "Recorded! "<< "Input for next Car" << endl;
     }
     void nopayCar()
     {
          car++;
          cout << "Recorded! "
               << "Input for next Car" << endl;
     }
     void display()
     {
          for (int i = 0; i < 38; i++)
               cout << "-";
          cout << "\nTotal cars On TollBooth = " << car;
          cout << "\nTotal Money Collected On TollBooth = " << money << endl;
          for (int i = 0; i < 38; i++)
               cout << "-";
     }
};

int main()
{
     char x;
     TollBooth d;
     bool flag = true;
     cout << "Enter 1 For Toll Paying Cars and 2 For Non-Toll Paying Cars = ";
     cout << "";
     while (flag)
     {

          cin >> x;
          switch (x)
          {
          case '1':
               d.payingCar();
               break;
          case '2':
               d.nopayCar();
               break;
          default:
               flag = false;
          }
     }
     d.display();

     return 0;
}