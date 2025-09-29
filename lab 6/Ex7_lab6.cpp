#include <iostream>
using namespace std;

int main() {
    int num;

    
    cout << "Enter a number (>= 4 digits): ";
    cin >> num;

    
    if (num < 1000) {
        cout << "Number must be at least 4 digits!" << endl;
        return 0;
    }

    
    while (num >= 10) {
        int sum = 0;

        
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }

        cout << "Intermediate sum = " << sum << endl;
        num = sum; 
    }

    
    cout << "Final single digit = " << num << endl;

    return 0;
}
