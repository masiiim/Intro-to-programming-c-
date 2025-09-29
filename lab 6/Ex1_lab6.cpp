#include <iostream>
using namespace std;

int main() {
    const int SIZE = 10;
    int arr[SIZE];
    int searchNum, count = 0;

    
    cout << "Enter 10 numbers: " << endl;
    for (int i = 0; i < SIZE; i++) {
        cin >> arr[i];
    }

    
    cout << "Enter a number to search: ";
    cin >> searchNum;

    
    for (int i = 0; i < SIZE; i++) {
        if (arr[i] == searchNum) {
            count++;
        }
    }

    
    if (count > 0) {
        cout << "Number " << searchNum << " occurred " << count << " times." << endl;
    } else {
        cout << "number not found" << endl;
    }

    return 0;
}
