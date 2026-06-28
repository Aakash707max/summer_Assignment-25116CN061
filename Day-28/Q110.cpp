#include <iostream>
#include <string>
using namespace std;

class Bank
{
private:
    string name;
    int accNo;
    float balance;

public:
    void createAccount()
    {
        cout << "\nEnter Account Holder Name: ";
        cin.ignore();
        getline(cin, name);

        cout << "Enter Account Number: ";
        cin >> accNo;

        cout << "Enter Initial Balance: ";
        cin >> balance;

        cout << "\nAccount Created Successfully!\n";
    }

    void deposit()
    {
        float amount;
        cout << "\nEnter Deposit Amount: ";
        cin >> amount;

        balance += amount;
        cout << "Amount Deposited Successfully!\n";
    }

    void withdraw()
    {
        float amount;
        cout << "\nEnter Withdraw Amount: ";
        cin >> amount;

        if (amount <= balance)
        {
            balance -= amount;
            cout << "Amount Withdrawn Successfully!\n";
        }
        else
        {
            cout << "Insufficient Balance!\n";
        }
    }

    void display()
    {
        cout << "\n------ Account Details ------\n";
        cout << "Account Holder : " << name << endl;
        cout << "Account Number : " << accNo << endl;
        cout << "Balance         : " << balance << endl;
    }
};

int main()
{
    Bank b;
    int choice;

    do
    {
        cout << "\n===== Bank Account System =====\n";
        cout << "1. Create Account\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Display Account\n";
        cout << "5. Exit\n";
        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            b.createAccount();
            break;

        case 2:
            b.deposit();
            break;

        case 3:
            b.withdraw();
            break;

        case 4:
            b.display();
            break;

        case 5:
            cout << "\nThank You!\n";
            break;

        default:
            cout << "\nInvalid Choice!\n";
        }

    } while (choice != 5);

    return 0;
}