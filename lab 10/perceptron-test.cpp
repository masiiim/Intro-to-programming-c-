
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double w = 4.65;
    double b = 0.10;

    int correctCount = 0;
    double x, y, target;

    cout << "Enter 10 integer values for x:\n";

    for (int i = 0; i < 10; i++) {
        cin >> x;
       
        y = w * x + b;

        
        target = 2 * x * x - 4;

        
        if (fabs(y - target) <= 1.0) {
            cout << "x = " << x << ", prediction = " << y
                 << ", target = " << target << "  correct" << endl;
            correctCount++;
        } else {
            cout << "x = " << x << ", prediction = " << y
                 << ", target = " << target << "  incorrect" << endl;
        }
    }

    double accuracy = (correctCount / 10.0) * 100.0;
    cout << "\nOverall accuracy = " << accuracy << "%" << endl;

    return 0;
}
