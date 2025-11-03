
#include <iostream>
#include <iomanip>
#include <ctime>     
using namespace std;

int main() {
    int side = 6;     
    int maxsum = 600;     

    int d, n;
    cout << "Enter number of dice: ";
    cin >> d;
    cout << "Enter number of rolls: ";
    cin >> n;

    
    
    int freq[maxsum + 1] = {0};

    srand(time(0));


    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < d; j++) {
            int roll = (rand() % side) + 1; 
            sum += roll;
        }
        freq[sum]++;
    }

    
    
    for (int total = d; total <= d * side; total++) {
        cout << setw(3) << total << ": ";

        
        for (int k = 0; k < freq[total]; k++) {
            cout << '*';
        }
        cout << '\n';
    }

    return 0;
}
