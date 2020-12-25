#include <iostream>
using namespace std;

class Employee
{
protected:
    int no;
    char name[20];
};

class Fitness : public Employee
{
private:
    int height, weight;

public:
    void get_data()
    {
        cout << "Enter name, number height and weight\n";
        cin >> name >> no >> height >> weight;
    }
    void display()
    {
        cout << "Name:" << name << "\nNumber:" << no << "\nHeight:" << height << "\nWeight" << weight;
    }
};

int main()
{
    Fitness b;
    b.get_data();
    b.display();
    return 0;
}