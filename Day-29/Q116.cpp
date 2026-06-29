#include <iostream>
#include <string>
using namespace std;

struct Item {
    int id;
    string name;
    int quantity;
    double price;
};

int main() {
    const int MAX_ITEMS = 50;
    Item inventory[MAX_ITEMS];
    int itemCount = 0;
    int choice, searchId;

    while (true) {
        cout << "\n--- Inventory Management System ---" << endl;
        cout << "1. Add New Item" << endl;
        cout << "2. View All Items" << endl;
        cout << "3. Search Item by ID" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        if (choice == 4) {
            cout << "Exiting Inventory System." << endl;
            break;
        }

        switch (choice) {
            case 1: // Add item
                if (itemCount >= MAX_ITEMS) {
                    cout << "Inventory is full!" << endl;
                } else {
                    cout << "Enter Item ID: ";
                    cin >> inventory[itemCount].id;
                    cin.ignore();
                    cout << "Enter Item Name: ";
                    getline(cin, inventory[itemCount].name);
                    cout << "Enter Quantity: ";
                    cin >> inventory[itemCount].quantity;
                    cout << "Enter Price: ";
                    cin >> inventory[itemCount].price;
                    
                    itemCount++;
                    cout << "Item added successfully!" << endl;
                }
                break;

            case 2: // View inventory
                if (itemCount == 0) {
                    cout << "Inventory is empty." << endl;
                } else {
                    cout << "\nID\tName\t\tQuantity\tPrice" << endl;
                    cout << "---------------------------------------------" << endl;
                    for (int i = 0; i < itemCount; i++) {
                        cout << inventory[i].id << "\t" 
                             << inventory[i].name << "\t\t" 
                             << inventory[i].quantity << "\t\t$" 
                             << inventory[i].price << endl;
                    }
                }
                break;

            case 3: // Search item
                if (itemCount == 0) {
                    cout << "Inventory is empty." << endl;
                } else {
                    cout << "Enter Item ID to search: ";
                    cin >> searchId;
                    bool found = false;
                    for (int i = 0; i < itemCount; i++) {
                        if (inventory[i].id == searchId) {
                            cout << "\nItem Found:" << endl;
                            cout << "Name: " << inventory[i].name << endl;
                            cout << "Quantity Available: " << inventory[i].quantity << endl;
                            cout << "Price per Unit: $" << inventory[i].price << endl;
                            found = true;
                            break;
                        }
                    }
                    if (!found) cout << "Item with ID " << searchId << " not found." << endl;
                }
                break;

            default:
                cout << "Invalid choice! Choose again." << endl;
        }
    }
    return 0;
}