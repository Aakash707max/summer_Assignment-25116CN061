#include <iostream>
#include <string>
using namespace std;

class Ticket
{
private:
    string name;
    int age;
    int tickets;
    float total;

public:
    void bookTicket()
    {
        cout << "\nEnter Passenger Name: ";
        cin.ignore();
        getline(cin, name);

        cout << "Enter Age: ";
        cin >> age;

        cout << "Enter Number of Tickets: ";
        cin >> tickets;

        total = tickets * 500; // Ticket price = 500

        cout << "\nTicket Booked Successfully!\n";
    }

    void displayTicket()
    {
        cout << "\n----- Ticket Details -----\n";
        cout << "Passenger Name : " << name << endl;
        cout << "Age            : " << age << endl;
        cout << "Tickets Booked : " << tickets << endl;
        cout << "Ticket Price   : 500" << endl;
        cout << "Total Amount   : " << total << endl;
    }

    void cancelTicket()
    {
        tickets = 0;
        total = 0;

        cout << "\nTicket Cancelled Successfully!\n";
    }
};

int main()
{
    Ticket t;
    int choice;

    do
    {
        cout << "\n===== Ticket Booking System =====\n";
        cout << "1. Book Ticket\n";
        cout << "2. Display Ticket\n";
        cout << "3. Cancel Ticket\n";
        cout << "4. Exit\n";
        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            t.bookTicket();
            break;

        case 2:
            t.displayTicket();
            break;

        case 3:
            t.cancelTicket();
            break;

        case 4:
            cout << "\nThank You!\n";
            break;

        default:
            cout << "\nInvalid Choice!\n";
        }

    } while (choice != 4);

    return 0;
}