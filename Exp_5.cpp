#include <bits/stdc++.h>
#include <vector>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        int temp = arr[min_index];
        arr[min_index] = arr[i];
        arr[i] = temp;
    }
}

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void printArr(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n, choice;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n]; 

    cout << "Enter the array element: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Your entered array : " << endl;
    printArr(arr, n);

    cout << "---Main menu---" << endl;
    cout << "1. Bubble sort\n2. Selection Sort\n3. Insertion Sort\n4. Exit\n";
    cout << "Enter your choice from 1-4: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "You selected Bubble sort operation\n";
            bubbleSort(arr, n);
            break;
        case 2:
            cout << "You selected Selection sort operation\n";
            selectionSort(arr, n);
            break;
        case 3:
            cout << "You selected Insertion sort operation\n";
            insertionSort(arr, n);
            break;
        case 4:
            cout << "Exiting the program...\n";
            return 0; 
        default:
            cout << "Invalid choice..\n";
            return 0;
    }

    cout << "Sorted array: ";
    printArr(arr, n);

    return 0;
}