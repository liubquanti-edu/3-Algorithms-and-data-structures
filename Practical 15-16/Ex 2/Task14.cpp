#include <iostream>
using namespace std;

struct Employee {
    char name[50];
    int hoursWorked;
    float hourlyRate;
};

int main() {
    const float taxRate = 0.12; // Ставка податку

    int numEmployees;

    cout << "Enter the number of employees: ";
    cin >> numEmployees;

    Employee employees[numEmployees];

    for (int i = 0; i < numEmployees; ++i) {
        cout << "Enter name of employee " << i + 1 << ": ";
        cin >> employees[i].name;

        cout << "Enter hours worked by employee " << i + 1 << ": ";
        cin >> employees[i].hoursWorked;

        cout << "Enter hourly rate of employee " << i + 1 << ": ";
        cin >> employees[i].hourlyRate;
    }

    cout << "\nEmployee Payroll:\n";
    for (int i = 0; i < numEmployees; ++i) {
        float earnings;
        if (employees[i].hoursWorked > 144) {
            earnings = 144 * employees[i].hourlyRate + (employees[i].hoursWorked - 144) * employees[i].hourlyRate * 2;
        } else {
            earnings = employees[i].hoursWorked * employees[i].hourlyRate;
        }

        float tax = earnings * taxRate;
        float netPay = earnings - tax;

        cout << "Employee " << employees[i].name << ", Earnings: $" << earnings << ", Tax: $" << tax << ", Net Pay: $" << netPay << endl;
    }

    return 0;
}
