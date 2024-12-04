#include <iostream>
using namespace std;

// Insertion Sort Implementation
void insertionSort(int array[], int size) {
    for (int step = 1; step < size; step++) {
        int key = array[step];
        int j = step - 1;

        // Compare key with each element on the left of it until an element smaller than t is found.
        while (j >= 0 && key < array[j]) {
            array[j + 1] = array[j];
            --j;
        }
        array[j + 1] = key;
    }
}

// Function to print an array
void printArray(int array[], int size) {
    for (int i = 0; i < size - 1; i++) {
        printf("%d ", array[i]);
    }
    printf("%d\n", array[size - 1]);
}

/**
 * Best Complexity: O(n)
 * Worst Complexity: O(n^2)
 * Average Complexity: O(n^2)
 */
int main() {
    int array[] = { 5, 2, 0, 1, 7, 4, 9 };
    int size = sizeof(array) / sizeof(array[0]);
    insertionSort(array, size);
    printf("Sorted Array is: ");
    printArray(array, size);
    return 0;
}