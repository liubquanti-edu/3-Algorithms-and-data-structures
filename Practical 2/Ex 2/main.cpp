#include <time.h>
#include <conio.h>
#include <iostream>
using namespace std;
int main(void)
{
    time_t seconds;
    seconds = time(NULL);
    cout << "The number of hours since January 1, 1970 = "<< seconds/3600 << endl;
    _getch();
    return 0;
}