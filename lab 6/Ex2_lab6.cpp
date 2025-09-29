#include <iostream>
using namespace std;

int main() {
    int SIZE = 6;
    double arr[SIZE];

    
    double start = 3.14;
    for (int i = 0; i < SIZE; i++) {
        arr[i] = start + (i * 0.10);  
    }

    
    cout << "Original numbers: ";
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    
    for (int i = 0; i < SIZE; i++) {
        for (int j = i + 1; j < SIZE; j++) {
            if (arr[i] < arr[j]) {
                
                double temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    
    cout << "Numbers in descending order: ";
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
