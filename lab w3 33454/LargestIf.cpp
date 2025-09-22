#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    
    cout << "Enter the first integer: ";
    cin >> a;
    cout << "Enter the second integer: ";
    cin >> b;
    cout << "Enter the third integer: ";
    cin >> c;

   
    if (a >= b && a >= c) {
        cout << "The largest number is: " << a << endl;
    } else if (b >= a && b >= c) {
        cout << "The largest number is: " << b << endl;
    } else {
        cout << "The largest number is: " << c << endl;
    }

    return 0;
}
