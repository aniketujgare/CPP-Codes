#include <iostream>
using namespace std;
struct date
{
    int d;
    int m;
    int y;
};
class hospital
{
    char name[100];
    struct date d_adm;
    struct date d_dis;

public:
    void getdata()
    {
        cout << "Enter name of the patient: ";
        cin.getline(name, 100);
        cout << "Enter date of admission: ";
        cin >> d_adm.d >> d_adm.m >> d_adm.y;
        cout << "Enter date of discharge: ";
        cin >> d_dis.d >> d_dis.m >> d_dis.y;
    }
    void display()
    {
        cout << "Patient name: " << name;
        cout << "\tDate of admission: " << d_adm.d << "/" << d_adm.m << "/" << d_adm.y;
        cout << "\tDate of discharge: " << d_dis.d << "/" << d_dis.m << "/" << d_dis.y << endl;
    }
};
class age : public hospital
{
    int a;

public:
    void get()
    {
        cout << "Enter age: ";
        cin >> a;
    }
    void put()
    {
        if (a < 12)
        {
            display();
            cout << "age: " << a;
        }
        else
            cout << "age greater than 12";
    }
};
int main()
{
    age a1;
    a1.getdata();
    a1.get();
    a1.put();
    return 0;
}


// OUTPUT :-
// Enter name of the patient: Bablu Seth
// Enter date of admission: 3 11 2020
// Enter date of discharge: 20 01 2021
// Enter age: 10
// Patient name: Bablu Seth      Date of admission: 3/11/2020    Date of discharge: 20/1/2021
// age: 10
// ------------------------------------------------------------------------------------------------
// Enter name of the patient: Donald Trump
// Enter date of admission: 3 11 2020
// Enter date of discharge: 20 01 2021
// Enter age: 47
// age greater than 12
