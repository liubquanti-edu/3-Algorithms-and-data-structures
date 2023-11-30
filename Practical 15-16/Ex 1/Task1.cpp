#include <iostream>
#include <conio.h>
using namespace std;

struct Book {
    char title[50];
    char author[50];
    float price;
};

int main() {
    Book books[10]; // Масив структур книг
    int numBooks;

    cout << "Enter the number of books: ";
    cin >> numBooks;

    cin.ignore(); // Очистка буфера вводу

    for (int i = 0; i < numBooks; ++i) {
        cout << "Enter author of book " << i + 1 << ": ";
        cin.getline(books[i].author, sizeof(books[i].author));

        cout << "Enter title of book " << i + 1 << ": ";
        cin.getline(books[i].title, sizeof(books[i].title));

        cout << "Enter price of book " << i + 1 << ": ";
        cin >> books[i].price;

        cin.ignore(); // Очистка буфера вводу
    }

    cout << "\nBooks in the store:\n";
    for (int i = 0; i < numBooks; ++i) {
        cout << "Book " << i + 1 << ": " << books[i].title << " by " << books[i].author << ", Price: $" << books[i].price << endl;
    }

    _getch();
    return 0;
}
