#include <iostream>
using namespace std;

// Swap the position of two elements
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Print an array
void printArray(int array[], int size) {
    for (int i = 0; i < size - 1; i++) {
        printf("%d ", array[i]);
    }
    printf("%d\n", array[size - 1]);
}

// Selection Sort Implementation
void selectionSort(int array[], int size) {
    for (int step = 0; step < size - 1; step++) {
        int minimum_index = step;
        for (int i = step + 1; i < size; i++) {
            if (array[i] < array[minimum_index])
                minimum_index = i;
        }
        swap(&array[minimum_index], &array[step]);
    }
}

/**
 * Best Complexity: O(n^2)
 * Worst Complexity: O(n^2)
 * Average Complexity: O(n^2)
 */
int main() {
    int array[] = { 4, 2, 1, 8, 5, 0 };
    int size = sizeof(array) / sizeof(array[0]);
    printf("Sorted Array is: ");
    selectionSort(array, size);
    printArray(array, size);
    return 0;
}