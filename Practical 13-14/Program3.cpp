#include <iostream>
#include <conio.h>
using namespace std;
unsigned long fibonacci(unsigned long);

int main()
{
    unsigned long entred_number;
    cout << "Enter number from fibonacci series: ";
    cin >> entred_number;
    for (int counter = 1; counter <= entred_number; counter++)
    cout << counter << " = " << fibonacci(counter) << endl;
    system("pause");
    return 0;
}

unsigned long fibonacci(unsigned long entred_number)

{
    if (entred_number == 1 || entred_number == 2)
    return (entred_number - 1);

    return fibonacci(entred_number - 1) +
    fibonacci(entred_number - 2);
}