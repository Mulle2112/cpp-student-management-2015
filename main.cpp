#include <iostream>
#include "Student.h"
using namespace std;

const int MAX_STUDENTS = 100;

int main() {
    Student students[MAX_STUDENTS];
    int count = 0;
    int choice;

    do {
        cout << "\n=== Student Management System ===\n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Search Student by ID\n";
        cout << "0. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                if(count >= MAX_STUDENTS) {
                    cout << "Database full!\n";
                    break;
                }
                int id;
                string name;
                float gpa;
                cout << "Enter ID: "; cin >> id;
                cin.ignore(); // ignore newline
                cout << "Enter Name: "; getline(cin, name);
                cout << "Enter GPA: "; cin >> gpa;
                students[count].setData(id, name, gpa);
                count++;
                break;

            case 2:
                cout << "\n--- All Students ---\n";
                for(int i = 0; i < count; i++) {
                    students[i].showData();
                }
                break;

            case 3:
                int searchId;
                cout << "Enter ID to search: "; cin >> searchId;
                for(int i = 0; i < count; i++) {
                    if(students[i].getId() == searchId) {
                        students[i].showData();
                        break;
                    }
                    if(i == count-1) cout << "Student not found!\n";
                }
                break;

            case 0:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while(choice != 0);

    return 0;
}
