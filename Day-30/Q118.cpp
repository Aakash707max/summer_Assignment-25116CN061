#include <iostream>
#include <string>

using namespace std;

struct Book {
    int id;
    string title;
    string author;
};

void addBook(Book library[], int &bookCount) {
    cout << "\nEnter Book ID: ";
    cin >> library[bookCount].id;
    cin.ignore();
    cout << "Enter Book Title: ";
    getline(cin, library[bookCount].title);
    cout << "Enter Author Name: ";
    getline(cin, library[bookCount].author);
    bookCount++;
    cout << "Book added successfully!\n";
}

void searchBook(const Book library[], int bookCount) {
    cin.ignore();
    string searchTitle;
    cout << "\nEnter the book title to search: ";
    getline(cin, searchTitle);

    for (int i = 0; i < bookCount; i++) {
        if (library[i].title == searchTitle) {
            cout << "\nBook Found!\n";
            cout << "ID: " << library[i].id << "\nTitle: " << library[i].title << "\nAuthor: " << library[i].author << endl;
            return;
        }
    }
    cout << "\nBook not found in the library.\n";
}

int main() {
    Book library[50];
    int bookCount = 0;
    int choice;

    do {
        cout << "\n=== Mini Library System ===\n";
        cout << "1. Add a Book\n";
        cout << "2. Search for a Book\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addBook(library, bookCount); break;
            case 2: searchBook(library, bookCount); break;
            case 3: cout << "Exiting system.\n"; break;
            default: cout << "Invalid choice.\n";
        }
    } while (choice != 3);

    return 0;
}