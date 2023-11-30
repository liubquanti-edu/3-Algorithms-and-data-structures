#include <iostream>
#include <windows.h>

void insertionSort(int arr[], int size, int& comparisons, int& swaps) {
    for (int i = 1; i < size; ++i) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            comparisons++;
            arr[j + 1] = arr[j];
            swaps++;
            j--;
        }
        arr[j + 1] = key;
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
    // Сортування масиву методом вставки
    insertionSort(arr, maxSize, comparisons, swaps);

    // Виведення відсортованого масиву на екран
    for (int i = 0; i < maxSize; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Кількість порівнянь: " << comparisons << std::endl;
    std::cout << "Кількість замін: " << swaps << std::endl;

    return 0;
}
