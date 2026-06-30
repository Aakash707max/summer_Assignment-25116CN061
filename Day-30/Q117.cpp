#include <iostream>
#include <string>

using namespace std;

const int MAX_STUDENTS = 100;

struct Student {
    int rollNo;
    string name;
    float marks;
};

void addStudents(Student students[], int &count) {
    int num;
    cout << "Enter number of students to add: ";
    cin >> num;
    
    for (int i = 0; i < num; i++) {
        if (count >= MAX_STUDENTS) {
            cout << "Database full!\n";
            return;
        }
        cout << "\nEnter details for student " << count + 1 << ":\n";
        cout << "Roll No: ";
        cin >> students[count].rollNo;
        cin.ignore(); // Clear newline character from buffer
        cout << "Name: ";
        getline(cin, students[count].name);
        cout << "Marks: ";
        cin >> students[count].marks;
        count++;
    }
}

void displayStudents(const Student students[], int count) {
    if (count == 0) {
        cout << "\nNo student records found.\n";
        return;
    }
    cout << "\n--- Student Records ---\n";
    for (int i = 0; i < count; i++) {
        cout << "Roll No: " << students[i].rollNo 
             << " | Name: " << students[i].name 
             << " | Marks: " << students[i].marks << endl;
    }
}

int main() {
    Student students[MAX_STUDENTS];
    int count = 0;
    int choice;

    do {
        cout << "\n=== Student Record Management ===\n";
        cout << "1. Add Student Records\n";
        cout << "2. Display All Student Records\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addStudents(students, count); break;
            case 2: displayStudents(students, count); break;
            case 3: cout << "Exiting system.\n"; break;
            default: cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 3);

    return 0;
}