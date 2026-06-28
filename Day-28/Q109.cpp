#include <iostream>
#include <string>
using namespace std;

class Library
{
private:
    string book[100];
    int total = 0;

public:
    void addBook()
    {
        cout << "\nEnter Book Name: ";
        cin.ignore();
        getline(cin, book[total]);
        total++;
        cout << "Book Added Successfully!\n";
    }

    void displayBooks()
    {
        if (total == 0)
        {
            cout << "\nNo Books Available!\n";
        }
        else
        {
            cout << "\n----- Book List -----\n";
            for (int i = 0; i < total; i++)
            {
                cout << i + 1 << ". " << book[i] << endl;
            }
        }
    }

    void searchBook()
    {
        string name;
        cout << "\nEnter Book Name to Search: ";
        cin.ignore();
        getline(cin, name);

        bool found = false;

        for (int i = 0; i < total; i++)
        {
            if (book[i] == name)
            {
                cout << "Book Found!\n";
                found = true;
                break;
            }
        }

        if (!found)
            cout << "Book Not Found!\n";
    }

    void deleteBook()
    {
        string name;
        cout << "\nEnter Book Name to Delete: ";
        cin.ignore();
        getline(cin, name);

        bool found = false;

        for (int i = 0; i < total; i++)
        {
            if (book[i] == name)
            {
                for (int j = i; j < total - 1; j++)
                {
                    book[j] = book[j + 1];
                }
                total--;
                found = true;
                cout << "Book Deleted Successfully!\n";
                break;
            }
        }

        if (!found)
            cout << "Book Not Found!\n";
    }
};

int main()
{
    Library l;
    int choice;

    do
    {
        cout << "\n===== Library Management System =====\n";
        cout << "1. Add Book\n";
        cout << "2. Display Books\n";
        cout << "3. Search Book\n";
        cout << "4. Delete Book\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            l.addBook();
            break;
        case 2:
            l.displayBooks();
            break;
        case 3:
            l.searchBook();
            break;
        case 4:
            l.deleteBook();
            break;
        case 5:
            cout << "Thank You!\n";
            break;
        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 5);

    return 0;
}