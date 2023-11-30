#include <iostream>
#include <windows.h>
#include <chrono>

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int partition(int arr[], int low, int high, int& comparisons, int& swaps) {
    int pivot = arr[(low + high) / 2]; // Опорний елемент - середній елемент масиву
    int i = low - 1;
    int j = high + 1;
    while (true) {
        do {
            i++;
            comparisons++;
        } while (arr[i] < pivot);

        do {
            j--;
            comparisons++;
        } while (arr[j] > pivot);

        if (i >= j) {
            return j;
        }
        swap(arr[i], arr[j]);
        swaps++;
    }
}

void quickSort(int arr[], int low, int high, int& comparisons, int& swaps) {
    if (low < high) {
        int pivotIndex = partition(arr, low, high, comparisons, swaps);
        quickSort(arr, low, pivotIndex, comparisons, swaps);
        quickSort(arr, pivotIndex + 1, high, comparisons, swaps);
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
    quickSort(arr, 0, maxSize - 1, comparisons, swaps); // сортування методом Хоара
    auto end = std::chrono::high_resolution_clock::now(); // кінець вимірювання часу
    std::chrono::duration<double> duration = end - start; // обчислення тривалості

    // Виведення відсортованого масиву на екран
    for (int i = 0; i < maxSize; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Кількість порівнянь: " << comparisons << std::endl;
    std::cout << "Кількість замін: " << swaps << std::endl;
    std::cout << "Час виконання: " << duration.count() << " секунд" << std::endl;

    return 0;
}
