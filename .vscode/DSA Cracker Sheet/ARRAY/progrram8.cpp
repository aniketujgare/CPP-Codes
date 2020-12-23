#include <iostream>
#include <fstream>
using namespace std;

//class student
class student
{
    int rollno, marks;
    char nm[30];
    string str;

public:
    //getdata() function to take data from the user
    void getdata()
    {
        cout << "\n Enter roll no. : ";
        cin >> rollno;
        cout << "\n Enter name of student : ";
        cin.ignore();
        cin.getline(nm, 20);
        cout << "\n Enter marks : ";
        cin >> marks;
    }
};

//main() function to test student class
int main()
{
    int m;
    fstream f;
    f.open("Student.txt", ios::binary | ios::out);
    cout << "Enter number of students: ";
    cin >> m;
    student st[m];
    for (int i = 0; i < m; i++)
    {
        st[i].getdata();
        f.write((char *)&st[i], sizeof(st[i]));
    }
    f.close();
    return 0;
}

// OUTPUT :-
// Enter number of students: 5

//  Enter roll no. : 44

//  Enter name of student : Chetna Agrawal

//  Enter marks : 10

//  Enter roll no. : 67

//  Enter name of student : Akshay Shinde

//  Enter marks : 10

//  Enter roll no. : 31

//  Enter name of student : Vaibhav Kasode

//  Enter marks : 8

//  Enter roll no. : 55

//  Enter name of student : Shubham Yadav

//  Enter marks : 6

//  Enter roll no. : 19

//  Enter name of student : Zeeshan Ahmad

//  Enter marks : 7