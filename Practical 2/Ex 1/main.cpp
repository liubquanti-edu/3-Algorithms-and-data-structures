#include <time.h>
#include <conio.h>
#include <iostream>
using namespace std;
int main(void)
{
    time_t timer;
    timer = time(NULL);
    cout<<&timer<<endl;
    cout<<timer<<endl;
    printf("Date: %s\n", ctime(&timer));
    getch();
    return 0;
}