#include <iostream>
using namespace std;

bool sleepIn(bool weekday, bool vacation) {
    return (!weekday || vacation);
}

int main() {
    cout<<boolalpha;
    bool weekday, vacation;
    cout << "\nEnter 1 if it is a weekday, 0 if not: ";
    cin >> weekday;
    cout << "Enter 1 if on vacation, 0 if not: ";
    cin >> vacation;

    cout << "Result → " << sleepIn(weekday, vacation) << endl;

    return 0;
}
