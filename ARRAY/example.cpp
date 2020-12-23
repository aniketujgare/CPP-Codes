#include<iostream>
using namespace std;
class TollBooth
{   private:
    unsigned int car;
    double money;
    public:
    TollBooth(): car(0), money(0) {}
    void payingCar()
    {
         car++;
         money++;
    }
    void nopayCar()
    {
         car++;
    }
    void display()
    {
         cout<<"\n Total Money Collected On tooBooth = "<<money<<endl;
    }
    void get()
    {
         cout<<" Total cars On tooBooth = "<<car<<endl;
    }
};
 
int main()
{
       char x;
       TollBooth d;
       cout<<"Enter 1 For Toll Paying Cars and 2 For Non-Toll Paying Cars = ";
       cout<<"";
cin>>x;
switch (x)
   {
       case '1':
                 d.payingCar();
                 d.display();
                 d.get();
                 break;
        case '2':
                 d.nopayCar();
                 d.display();
                 d.get();
                 break;
   }
return 0;
}