#include <iostream>
#include <ctime>    
#include <algorithm> 
using namespace std;

int main() {
    const int SIZE = 6;
    double arr[SIZE];
    double sum = 0;

    srand(time(0)); 

    
    for (int i = 0; i < SIZE; i++) {
        arr[i] = (double) rand() / RAND_MAX;
        cout << arr[i] << endl;
        sum += arr[i];
    }

    
    cout << "Average: " << sum / SIZE << endl;
    cout << "Maximum: " << max({arr[0], arr[1], arr[2], arr[3], arr[4], arr[5]}) << endl;
    cout << "Minimum: " << min({arr[0], arr[1], arr[2], arr[3], arr[4], arr[5]}) << endl;

    return 0;
}
