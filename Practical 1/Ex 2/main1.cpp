#include <iostream>
using namespace std;

const int SIZE = 3;

void findSumOfDiagonal(int arr[][SIZE]) {
    int sum = 0;
    for(int i = 0; i < SIZE; i++) {
        sum += arr[i][i];
    }
    cout << "Result: " << sum << endl;
}

int main() {
    int arr[SIZE][SIZE] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    findSumOfDiagonal(arr);

    return 0;
}
