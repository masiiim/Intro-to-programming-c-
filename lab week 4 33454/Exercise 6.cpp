#include <iostream>
using namespace std;

int main() {
    char type, sizeChoice, modeChoice;
    bool doubleCup, manual;
    double factor;

    cout << "Enter coffee type (W for White, B for Black): ";
    cin >> type;

    cout << "Double cup? (Y/N): ";
    cin >> sizeChoice;
    doubleCup = (sizeChoice == 'Y' || sizeChoice == 'y');

    cout << "Manual mode? (Y/N): ";
    cin >> modeChoice;
    manual = (modeChoice == 'Y' || modeChoice == 'y');

    if (doubleCup) {
    factor = 1.5;   
} else {
    factor = 1.0;   
}

    cout << "\nPreparing your coffee...\n";

    if (type == 'W' || type == 'w') {
        cout << "Put Water: " << 15 * factor << " minutes\n";
        cout << "Add Sugar: " << 15 * factor << " minutes\n";
        cout << "Mix Well: " << 20 * factor << " minutes\n";
        cout << "Add Coffee: " << 2 * factor << " minutes\n";
        cout << "Add Milk: " << 4 * factor << " minutes\n";
        cout << "Mix Well: " << 20 * factor << " minutes\n";
    }
    else if (type == 'B' || type == 'b') {
        cout << "Put Water: " << 20 * factor << " minutes\n";
        cout << "Add Sugar: " << 20 * factor << " minutes\n";
        cout << "Mix Well: " << 25 * factor << " minutes\n";
        cout << "Add Coffee: " << 15 * factor << " minutes\n";
        cout << "Mix Well: " << 25 * factor << " minutes\n";
    }
    else {
        cout << "Invalid coffee type!\n";
    }

    cout << "\nYour coffee is ready! ";
    return 0;
}
