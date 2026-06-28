#include <iostream>
#include <string>
using namespace std;

class Contact
{
private:
    string name, phone, email;

public:
    void addContact()
    {
        cin.ignore();

        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter Phone: ";
        getline(cin, phone);

        cout << "Enter Email: ";
        getline(cin, email);

        cout << "\nContact Added Successfully!\n";

    }

    void displayContact()
    {
        cout << "\n----- Contact Details -----\n";
        cout << "Name  : " << name << endl;
        cout << "Phone : " << phone << endl;
        cout << "Email : " << email << endl;
    }
};

int main()
{
    Contact c;
    int choice;

    do
    {
        cout << "\n===== Contact Management System =====\n";
        cout << "1. Add Contact\n";
        cout << "2. Display Contact\n";
        cout << "3. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            c.addContact();
            break;

        case 2:
            c.displayContact();
            break;

        case 3:
            cout << "Thank You!\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 3);

    return 0;
}