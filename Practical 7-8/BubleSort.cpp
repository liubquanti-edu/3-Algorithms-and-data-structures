#include <iostream>
#include <chrono>
#include <windows.h>

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void bubbleSort(int arr[], int size, int& comparisons, int& swaps) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            comparisons++;
            if (arr[j] < arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swaps++;
            }
        }
    }
}

int main() {

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    const int maxSize = 100;
    int arr[maxSize];

    // Генерація масиву
    for (int i = 0; i < maxSize; ++i) {
        arr[i] = rand() % 51; // генеруємо випадкові числа від 0 до 50
    }

    // Виведення масиву на екран
    for (int i = 0; i < maxSize; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    int comparisons = 0; // кількість порівнянь
    int swaps = 0; // кількість обмінів
    auto start = std::chrono::high_resolution_clock::now(); // початок вимірювання часу
    bubbleSort(arr, maxSize, comparisons, swaps); // сортування
    auto end = std::chrono::high_resolution_clock::now(); // кінець вимірювання часу
    std::chrono::duration<double> duration = end - start; // обчислення тривалості

    // Виведення відсортованого масиву на екран
    for (int i = 0; i < maxSize; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Кількість порівнянь: " << comparisons << std::endl;
    std::cout << "Кількість обмінів: " << swaps << std::endl;
    std::cout << "Час виконання: " << duration.count() << " секунд" << std::endl;

    return 0;
}
