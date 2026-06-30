#include <iostream>
#include <string>

using namespace std;

const int MAX_ITEMS = 50;

// Parallel arrays simulating a lightweight transactional system database
int itemIDs[MAX_ITEMS];
string itemNames[MAX_ITEMS];
int itemQuantities[MAX_ITEMS];
double itemPrices[MAX_ITEMS];
int globalItemCount = 0;

void createInventoryItem() {
    if (globalItemCount >= MAX_ITEMS) {
        cout << "\nError: System capacity limit reached.\n";
        return;
    }
    cout << "\nEnter Unique Item ID (Numeric): ";
    cin >> itemIDs[globalItemCount];
    cin.ignore();
    
    cout << "Enter Item Description/Name: ";
    getline(cin, itemNames[globalItemCount]);
    
    cout << "Enter Stock Unit Quantity: ";
    cin >> itemQuantities[globalItemCount];
    
    cout << "Enter Unit Price ($): ";
    cin >> itemPrices[globalItemCount];
    
    globalItemCount++;
    cout << "Item logged into master inventory catalog successfully!\n";
}

void showInventoryCatalog() {
    if (globalItemCount == 0) {
        cout << "\nInventory catalog is completely empty.\n";
        return;
    }
    cout << "\n=========================== CURRENT STORES INVENTORY ===========================\n";
    cout << "ID\t\tName/Description\t\tIn-Stock Qty\tUnit Cost\n";
    cout << "--------------------------------------------------------------------------------\n";
    for (int i = 0; i < globalItemCount; i++) {
        cout << itemIDs[i] << "\t\t" << itemNames[i] << "\t\t\t" << itemQuantities[i] << "\t\t$" << itemPrices[i] << "\n";
    }
    cout << "================================================================================\n";
}

void processCustomerCheckout() {
    int targetID, orderQty;
    cout << "\nEnter the Item ID customer wishes to buy: ";
    cin >> targetID;

    for (int i = 0; i < globalItemCount; i++) {
        if (itemIDs[i] == targetID) {
            cout << "Found: " << itemNames[i] << " | Stock Available: " << itemQuantities[i] << "\n";
            cout << "Enter quantity to checkout: ";
            cin >> orderQty;

            if (orderQty <= itemQuantities[i]) {
                double billTotal = orderQty * itemPrices[i];
                itemQuantities[i] -= orderQty; // Deduct from inventory stock array balance
                
                cout << "\n--- TRANSACTION RECEIPT ---\n";
                cout << "Item Purchased: " << itemNames[i] << "\n";
                cout << "Quantity: " << orderQty << "\n";
                cout << "Total Invoice Amount: $" << billTotal << "\n";
                cout << "Transaction Approved.\n";
            } else {
                cout << "\nTransaction Denied: Insufficient stock balance.\n";
            }
            return;
        }
    }
    cout << "\nError: Item ID code not recognized in registry.\n";
}

int main() {
    int commandSelection;
    do {
        cout << "\n============================================\n";
        cout << "     INVENTORY PORTAL & CHECKOUT SYSTEM     \n";
        cout << "============================================\n";
        cout << " 1. Register New Supply Item\n";
        cout << " 2. Print Full Inventory Audit Sheet\n";
        cout << " 3. Process Customer Purchase Order\n";
        cout << " 4. Turn Off System Terminals\n";
        cout << "Select Operation Option (1-4): ";
        cin >> commandSelection;

        switch (commandSelection) {
            case 1: createInventoryItem(); break;
            case 2: showInventoryCatalog(); break;
            case 3: processCustomerCheckout(); break;
            case 4: cout << "\nSystem shutting down. Securely closing logs.\n"; break;
            default: cout << "\nInvalid terminal trigger! Please read index mapping carefully.\n";
        }
    } while (commandSelection != 4);

    return 0;
}