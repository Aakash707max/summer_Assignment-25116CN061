#include <iostream>
using namespace std;

class Salary
{
public:
    int empId;
    char name[50];
    float basic, hra, da, gross;

    void input()
    {
        cout << "Enter Employee ID: ";
        cin >> empId;

        cout << "Enter Employee Name: ";
        cin >> name;

        cout << "Enter Basic Salary: ";
        cin >> basic;
    }

    void calculate()
    {
        hra = basic * 0.20;   // 20% HRA
        da = basic * 0.10;    // 10% DA
        gross = basic + hra + da;
    }

    void display()
    {
        cout << "\nSalary Details";
        cout << "\nEmployee ID : " << empId;
        cout << "\nName        : " << name;
        cout << "\nBasic Salary: " << basic;
        cout << "\nHRA         : " << hra;
        cout << "\nDA          : " << da;
        cout << "\nGross Salary: " << gross << endl;
    }
};

int main()
{
    Salary s;

    s.input();
    s.calculate();
    s.display();

    return 0;
}