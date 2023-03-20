#include <iostream>

/**
 * Write a function to find the largest number in a given integer array.
 * 
 * Write a function to find the smallest number in a given integer array.
 * 
 * Using pointers, write a single function to find both the largest and smallest numbers in a given integer array 
 * 
 * 
 */

int maxOfArr(int arr[], int size) {
    int max = arr[0];
    for (int i = 0; i < size; i++) {
        if (max < arr[i]) max = arr[i];
    }
    return max;
}

int minOfArr(int arr[], int size) {
    int min = arr[0];
    for (int i = 0; i < size; i++) {
        if (min > arr[i]) min = arr[i];
    }
    return min;
}

void minAndMaxOfArrWithPointers(int arr[], int size, int* min, int* max) {
    *max = arr[0];
    for (int i = 0; i < size; i++) {
        if (*max < arr[i]) *max = arr[i];
    }

    *min = arr[0];
    for (int i = 0; i < size; i++) {
        if (*min > arr[i]) *min = arr[i];
    }
}


int main() {
    int min, max, size;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    int arr[size];

    std::cout << "Enter the " << size-1 << " values of the array:\n"; 
    for (int i = 0; i < size; i++) {
        std::cout << "Value #" << i << ": ";
        std::cin >> arr[i];
    }

    std::cout << "The minimum of the array is: " << minOfArr(arr, size) << std::endl;
    std::cout << "The maximum of the array is: " << maxOfArr(arr, size) << std::endl;

    minAndMaxOfArrWithPointers(arr, size, &min, &max);
    std::cout << "The min and max of the array using pointers are: " << min << " and "<< max << std::endl;
    
    return 0;
}

