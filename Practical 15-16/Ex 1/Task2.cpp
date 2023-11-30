#include <iostream>
#include <conio.h>
using namespace std;

struct Student {
    char fio[32]; // прізвище
    int birthDate; //дата народження
    int course; //курс
    double scholarship; // розмір стипендії
};

int main() {
    Student students[100]; // Масив структур студентів
    int numStudents;

    cout << "Enter the number of students: ";
    cin >> numStudents;

    cin.ignore(); // Очистка буфера вводу

    for (int i = 0; i < numStudents; ++i) {
        cout << "Enter full name of student " << i + 1 << ": ";
        cin.getline(students[i].fio, sizeof(students[i].fio));

        cout << "Enter birth date of student " << i + 1 << ": ";
        cin >> students[i].birthDate;

        cout << "Enter course of student " << i + 1 << ": ";
        cin >> students[i].course;

        cout << "Enter scholarship of student " << i + 1 << ": ";
        cin >> students[i].scholarship;

        cin.ignore(); // Очистка буфера вводу
    }

    cout << "\nList of students:\n";
    for (int i = 0; i < numStudents; ++i) {
        cout << "Student " << i + 1 << ": " << students[i].fio << ", Birth Date: " << students[i].birthDate << ", Course: " << students[i].course << ", Scholarship: $" << students[i].scholarship << endl;
    }

    _getch();
    return 0;
}
