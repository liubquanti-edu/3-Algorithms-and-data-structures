#include <iostream>
#include <chrono>
#include <conio.h>

unsigned long int factorial(unsigned long int);

int main() {
    int n;

    std::cout << "Enter n for calculation n!: ";
    std::cin >> n;

    auto start = std::chrono::high_resolution_clock::now();

    for (int k = 1; k <= n; k++) {
        unsigned long int result = factorial(k);
        std::cout << k << "! = " << result << std::endl;
    }

    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration = end - start;

    std::cout << "Time taken: " << duration.count() << " seconds" << std::endl;

    return 0;
}

unsigned long int factorial(unsigned long int f) {
    unsigned long int result = 1;
    for (unsigned long int i = 2; i <= f; ++i) {
        result *= i;
    }
    return result;
}
