#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 0, 3, 0, 5, 0, 7, 8, 9, 0, 0};
    int count = 0;

    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
        if(arr[i] != 0) {
            count++;
        }
    }

    cout << "Result: " << count << endl;

    return 0;
}
