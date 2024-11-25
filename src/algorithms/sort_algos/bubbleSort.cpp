#include <iostream>
using namespace std;

// Bubble Sort Algorithm
void bubbleSort(int array[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

// function to print out an array
void printArray(int array[], int size) {
    for (int i = 0; i < size - 1; i++) {
        printf("%d ", array[i]);
    }
    printf("%d\n", array[size - 1]);
}

/**
 * Implementation of Bubble Sort Algorithm in main function
 * - Min Time cost: O(n)
 * - Max Time cost: O(n ^ 2)
 * - Average Time cost: O(n ^ 2)
 */
int main() {

    // define array to sort
    int array[] = { 3, 5, 1, 7, 2, 0, 9 };

    // define size of the array (size is length of the array devided by an element)
    int size = sizeof(array) / sizeof(array[0]);

    // sort the array with a bubble sort algorithm
    bubbleSort(array, size);

    // print out the sorted array
    printf("Sorted Array is: ");
    printArray(array, size);

    return 0;
}