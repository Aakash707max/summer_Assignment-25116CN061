#include <iostream>
using namespace std;

class Student
{
public:
    int roll;
    char name[50];
    float marks;

    void input()
    {
        cout << "Enter Roll Number: ";
        cin >> roll;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display()
    {
        cout << "\nStudent Record";
        cout << "\nRoll Number : " << roll;
        cout << "\nName        : " << name;
        cout << "\nMarks       : " << marks << endl;
    }
};

int main()
{
    Student s;

    s.input();
    s.display();

    return 0;
}