#include <iostream>
using namespace std;

void SortFunction(int *arr, int *size, int order) {
    
    for (int i = 0; i < *size - 1; i++) {
        for (int j = 0; j < *size - i - 1; j++) {
            int *current = arr + j;
            int *next = arr + j + 1;

            
            if (order == 1 && *current > *next) {
                int temp = *current;
                *current = *next;
                *next = temp;
            }

            
            else if (order == 2 && *current < *next) {
                int temp = *current;
                *current = *next;
                *next = temp;
            }
        }
    }
}

int main() {
    int arr[] = {5, 2, 9, 1, 7};
    int size = 5;

    int order;
    cout << "Enter 1 for Ascending, 2 for Descending: ";
    cin >> order;

    SortFunction(arr, &size, order);

    cout << "\nSorted array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
