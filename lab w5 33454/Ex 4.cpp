#include <iostream>
using namespace std;

int main() {
    int num;
    int negativeCount = 0, positiveCount = 0, rangeCount = 0;

    do {
        cout << "Enter an integer: ";
        cin >> num;

        
        if (num > 0) {
            positiveCount++;
        } else if (num < 0) {
            negativeCount++;
        }

        
        if (num >= 100 && num <= 200) {
            rangeCount++;
        }

        
        if (num % 2 != 0) {
            cout << "Square of " << num << " = " << num * num << endl;
        }

    } while (!(num > 15 && num < 25)); // stop if in (15,25)

    cout << "\nSummary:" << endl;
    cout << "Negative numbers entered: " << negativeCount << endl;
    cout << "Positive numbers entered: " << positiveCount << endl;
    cout << "Numbers in range [100–200]: " << rangeCount << endl;

    return 0;
}
