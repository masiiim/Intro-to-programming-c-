#include <iostream>
using namespace std;

int main() {
    cout << "Solutions for equation 3a + 7b - 5c = 10" << endl;

    for (int a = -10; a <= 10; a++) {
        for (int b = -10; b <= 10; b++) {
            for (int c = -10; c <= 10; c++) {
                if (3 * a + 7 * b - 5 * c == 10) {
                    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
                }
            }
        }
    }

    return 0;
}
