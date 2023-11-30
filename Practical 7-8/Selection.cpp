#include <iostream>
#include <chrono>
#include <windows.h>

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void selectionSort(int arr[], int size, int& comparisons, int& swaps) {
    for (int i = 0; i < size - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < size; ++j) {
            comparisons++;
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            swap(arr[i], arr[minIndex]);
            swaps++;
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
    selectionSort(arr, maxSize, comparisons, swaps); // сортування
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
