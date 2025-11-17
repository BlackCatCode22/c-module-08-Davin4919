//
// Created by D_Avina on 11/17/2025.
//



#include <iostream>
#include <vector>
#include <algorithm> // Required for the built-in swap function

using namespace std;

// Function to print the elements of the vector
void printArray(const vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

// SIMPLIFIED Bubble Sort function
// This version removes the 'early exit' optimization for maximum clarity.
void bubbleSort(vector<int>& arr) {
    int n = arr.size();

    // Outer loop: This loop ensures the entire array is traversed n-1 times.
    // In each iteration, the largest unsorted element moves (bubbles up) to its correct place.
    for (int i = 0; i < n - 1; ++i) {

        // Inner loop: This loop handles the comparisons and swaps for the current pass.
        // n - i - 1 ensures we don't check elements that are already sorted at the end.
        for (int j = 0; j < n - i - 1; ++j) {

            // CORE LOGIC: Compare adjacent elements and swap them if the first is larger than the second.
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    // 1. Initialize the array of ten numbers
    vector<int> numbers = {56, 12, 99, 4, 33, 71, 1, 88, 25, 60};

    cout << "--- Simplified C++ Bubble Sort ---" << endl;
    cout << "Initial Array (10 numbers): ";
    printArray(numbers);
    cout << "----------------------------------" << endl;

    // 2. Perform the Bubble Sort
    bubbleSort(numbers);

    cout << "----------------------------------" << endl;
    cout << "Final Sorted Array: ";
    printArray(numbers);
    cout << "----------------------------------" << endl;

    return 0;
}