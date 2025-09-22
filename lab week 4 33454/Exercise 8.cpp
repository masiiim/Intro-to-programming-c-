#include <iostream>
using namespace std;

int main() {
    int numTypes, qty, total = 0;
    char choice;

    cout << "Menu:\n";
    cout << "B = Burger (Rs. 200)\n";
    cout << "F = French Fries (Rs. 50)\n";
    cout << "P = Pizza (Rs. 500)\n";
    cout << "S = Sandwiches (Rs. 150)\n\n";

    cout << "Enter number of food types (2–4): ";
    cin >> numTypes;

    for (int i = 1; i <= numTypes; i++) {
        cout << "Enter choice (B/F/P/S): ";
        cin >> choice;
        cout << "Enter quantity: ";
        cin >> qty;

        
        if (choice == 'B' || choice == 'b') {
            total += 200 * qty;
        }
        else {
            if (choice == 'F' || choice == 'f') {
                total += 50 * qty;
            }
            else {
                if (choice == 'P' || choice == 'p') {
                    total += 500 * qty;
                }
                else {
                    if (choice == 'S' || choice == 's') {
                        total += 150 * qty;
                    }
                    else {
                        cout << "Invalid choice entered!\n";
                    }
                }
            }
        }
    }

    cout << "\nTotal charges: Rs. " << total << endl;

    return 0;
}
