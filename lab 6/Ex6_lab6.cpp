#include <iostream>
using namespace std;

int main() {
    int SIZE = 5;
    int arr1[SIZE], arr2[SIZE];

    cout << "Enter marks for first 5 students: " << endl;
    for (int i = 0; i < SIZE; i++) {
        cin >> arr1[i];
    }

    cout << "Enter marks for next 5 students: " << endl;
    for (int i = 0; i < SIZE; i++) {
        cin >> arr2[i];
    }

    
    cout << "\nMarks of first 5 students: ";
    for (int i = 0; i < SIZE; i++) {
        cout << arr1[i] << " ";
    }

    
    cout << "\nMarks of next 5 students: ";
    for (int i = 0; i < SIZE; i++) {
        cout << arr2[i] << " ";
    }

    
    cout << "\n\nCommon marks in both arrays: ";
    bool found = false;
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (arr1[i] == arr2[j]) {
                cout << arr1[i] << " ";
                found = true;
                break; 
            }
        }
    }

    if (!found) {
        cout << "None";
    }

    return 0;
}
