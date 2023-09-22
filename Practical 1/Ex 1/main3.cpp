#include <iostream>
using namespace std;

int main() {
    int heights[] = {160, 170, 165, 175, 155};
    int sum = 0;
    int count = 0;

    for(int i = 0; i < sizeof(heights)/sizeof(heights[0]); i++) {
        sum += heights[i];
    }

    float average = sum / (sizeof(heights)/sizeof(heights[0]));

    for(int i = 0; i < sizeof(heights)/sizeof(heights[0]); i++) {
        if(heights[i] > average) {
            count++;
        }
    }

    cout << "Result: " << count << endl;

    return 0;
}
