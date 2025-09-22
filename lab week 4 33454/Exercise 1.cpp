#include <iostream>
using namespace std;

int main() {
    long long n;
    cout << "Enter a number: ";
    cin >> n;
    
    while (n != 0 && n != 7 && n != -7) {
        if (n<10 && n >-10)
        {
            cout << "Not divisible by 7.";
            return -1;
        }
        
        long long lastDigit = (int) n % 10;
        long long rest = n / 10;
        n = (rest - (2 * lastDigit));
    }
    

   cout << "Divisible by 7.";
    return 0;
}