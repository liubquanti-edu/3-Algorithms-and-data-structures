#include <iostream>
#include <conio.h>
using namespace std;
unsigned long int factorial(unsigned long int);

int i = 1;

unsigned long int result;

int main()
{
    int n; ;

    cout << "Enter n for calculation n!: ";
    cin >> n;
    for (int  k = 1; k <= n; k++)
    {
        cout << k << "!" << "=" << factorial(k) <<  endl;
    }
    system("pause");
    return 0;
}
unsigned long int factorial(unsigned long int f)
{
    if (f == 1 || f == 0)

    return 1;
    result =f*factorial(f-1);
    return result;
}