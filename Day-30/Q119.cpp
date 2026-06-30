#include <iostream>
#include <string>

using namespace std;

struct Employee {
    int id;
    string name;
    double baseSalary;
};

void addEmployee(Employee emp[], int &empCount) {
    cout << "\nEnter Employee ID: ";
    cin >> emp[empCount].id;
    cin.ignore();
    cout << "Enter Employee Name: ";
    getline(cin, emp[empCount].name);
    cout << "Enter Base Salary: $";
    cin >> emp[empCount].baseSalary;
    empCount++;
    cout << "Employee profile created.\n";
}

void generateSalarySlip(const Employee emp[], int empCount) {
    int searchId;
    cout << "\nEnter Employee ID to generate slip: ";
    cin >> searchId;

    for (int i = 0; i < empCount; i++) {
        if (emp[i].id == searchId) {
            double allowance = emp[i].baseSalary * 0.10; // 10% Allowance
            double tax = emp[i].baseSalary * 0.05;      // 5% Tax deduction
            double netSalary = emp[i].baseSalary + allowance - tax;

            cout << "\n--- Salary Slip ---\n";
            cout << "ID: " << emp[i].id << "\nName: " << emp[i].name << endl;
            cout << "Base Salary: $" << emp[i].baseSalary << endl;
            cout << "Allowance (+): $" << allowance << endl;
            cout << "Tax Deducted (-): $" << tax << endl;
            cout << "Net Take-Home Salary: $" << netSalary << endl;
            return;
        }
    }
    cout << "Employee ID not found.\n";
}

int main() {
    Employee employees[50];
    int empCount = 0;
    int choice;

    do {
        cout << "\n=== Mini Employee Management ===\n";
        cout << "1. Add Employee Profile\n";
        cout << "2. Generate Salary Slip\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addEmployee(employees, empCount); break;
            case 2: generateSalarySlip(employees, empCount); break;
            case 3: cout << "Exiting system.\n"; break;
            default: cout << "Invalid choice.\n";
        }
    } while (choice != 3);

    return 0;
}