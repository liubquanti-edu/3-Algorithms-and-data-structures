#include <iostream>
#include <windows.h>

void shellSort(int arr[], int size, int& comparisons, int& swaps) {
    int gap = size / 2;
    while (gap > 0) {
        for (int i = gap; i < size; ++i) {
            int temp = arr[i];
            int j = i;
            while (j >= gap && arr[j - gap] > temp) {
                comparisons++;
                arr[j] = arr[j - gap];
                swaps++;
                j -= gap;
            }
            arr[j] = temp;
        }
        gap /= 2;
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
    // Сортування масиву методом Шелла
    shellSort(arr, maxSize, comparisons, swaps);

    // Виведення відсортованого масиву на екран
    for (int i = 0; i < maxSize; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Кількість порівнянь: " << comparisons << std::endl;
    std::cout << "Кількість замін: " << swaps << std::endl;

    return 0;
}
