#include <iostream>
using namespace std;

class Marksheet
{
public:
    int rollNo;
    char name[50];
    float m1, m2, m3, m4, m5;
    float total, percentage;

    void input()
    {
        cout << "Enter Roll Number: ";
        cin >> rollNo;

        cout << "Enter Student Name: ";
        cin >> name;

        cout << "Enter Marks of 5 Subjects:\n";
        cin >> m1 >> m2 >> m3 >> m4 >> m5;
    }

    void calculate()
    {
        total = m1 + m2 + m3 + m4 + m5;
        percentage = total / 5;
    }

    void display()
    {
        cout << "\n----- MARKSHEET -----";
        cout << "\nRoll Number : " << rollNo;
        cout << "\nName        : " << name;
        cout << "\nTotal Marks : " << total;
        cout << "\nPercentage  : " << percentage << "%";

        if (percentage >= 90)
            cout << "\nGrade : A+";
        else if (percentage >= 75)
            cout << "\nGrade : A";
        else if (percentage >= 60)
            cout << "\nGrade : B";
        else if (percentage >= 50)
            cout << "\nGrade : C";
        else if (percentage >= 35)
            cout << "\nGrade : D";
        else
            cout << "\nGrade : Fail";
    }
};

int main()
{
    Marksheet s;

    s.input();
    s.calculate();
    s.display();

    return 0;
}