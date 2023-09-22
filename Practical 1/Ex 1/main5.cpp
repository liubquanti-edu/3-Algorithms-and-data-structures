#include <iostream>
using namespace std;

int main() {
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int sum[3] = {0};

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            sum[j] += arr[i][j];
        }
    }

    for(int i = 0; i < 3; i++) {
        cout << "Result " << i << ": " << sum[i] << endl;
    }

    return 0;
}
