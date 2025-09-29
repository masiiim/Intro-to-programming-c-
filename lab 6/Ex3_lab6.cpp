#include <iostream>
using namespace std;

int main() 
{
    const int SIZE = 6;
    int arr[SIZE];
    bool symmetric = true;

    cout << "Enter 6 numbers: " << endl;
    for (int i = 0; i < SIZE; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < SIZE / 2; i++) {
        if (arr[i] != arr[SIZE - 1 - i]) {
            symmetric = false;
            break;
        }
    }

    if (symmetric)
        cout << "Symmetric";
    else
        cout << "Asymmetric";

    return 0;
}
