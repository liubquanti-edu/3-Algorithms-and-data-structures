#include <iostream>
using namespace std;

const int SIZE = 5;

void countOccurrences(int arr[], int num) {
    int count = 0;
    for(int i = 0; i < SIZE; i++) {
        if(arr[i] == num) {
            count++;
        }
    }
    cout << "Number " << num << " occurrence " << count << " time(s)." << endl;
}

int main() {
    int arr[SIZE] = {2, 4, 5, 2, 8};

    int num;
    cout << "Enter the number: ";
    cin >> num;

    countOccurrences(arr, num);

    return 0;
}
