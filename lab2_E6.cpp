#include <iostream>
#include <cstring> // For strcpy
using namespace std;

struct Student {
    char name[50];
    int id;
    float grade;
};

const int MAX_STUDENTS = 100;
Student students[MAX_STUDENTS];
int studentCount = 0;

void addStudent() {
    if (studentCount >= MAX_STUDENTS) {
        cout << "Database full! Cannot add more students.\n";
        return;
    }

    Student newStudent;
    cout << "Enter student name: ";
    cin.ignore(); // Clear input buffer
    cin.getline(newStudent.name, 50);

    cout << "Enter student ID: ";
    cin >> newStudent.id;

    cout << "Enter student grade: ";
    cin >> newStudent.grade;

    students[studentCount++] = newStudent;
    cout << "Student added successfully!\n\n";
}

void displayAllStudents() {
    if (studentCount == 0) {
        cout << "No students in database.\n\n";
        return;
    }

    cout << "\nStudent Records:\n";
    cout << "----------------------------------------\n";
    for (int i = 0; i < studentCount; i++) {
        cout << "Name: " << students[i].name << "\n";
        cout << "ID: " << students[i].id << "\n";
        cout << "Grade: " << students[i].grade << "\n";
        cout << "----------------------------------------\n";
    }
    cout << endl;
}

void searchStudent() {
    if (studentCount == 0) {
        cout << "No students in database.\n\n";
        return;
    }

    int searchId;
    cout << "Enter student ID to search: ";
    cin >> searchId;

    bool found = false;
    for (int i = 0; i < studentCount; i++) {
        if (students[i].id == searchId) {
            cout << "\nStudent Found:\n";
            cout << "Name: " << students[i].name << "\n";
            cout << "ID: " << students[i].id << "\n";
            cout << "Grade: " << students[i].grade << "\n\n";
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Student with ID " << searchId << " not found.\n\n";
    }
}

int main() {
    int choice;

    do {
        cout << "Student Record Management System\n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Search Student by ID\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                displayAllStudents();
                break;
            case 3:
                searchStudent();
                break;
            case 4:
                cout << "Exiting program...\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n\n";
        }
    } while (choice != 4);

    return 0;
}