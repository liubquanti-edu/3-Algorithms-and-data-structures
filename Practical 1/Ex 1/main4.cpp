#include <iostream>
using namespace std;

int main() {
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int max_element = arr[0][0];
    int row = 0, col = 0;

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(arr[i][j] > max_element) {
                max_element = arr[i][j];
                row = i;
                col = j;
            }
        }
    }

    cout << "Result: " << max_element << endl;
    cout << "Row: " << row << ", Column: " << col << endl;

    return 0;
}
