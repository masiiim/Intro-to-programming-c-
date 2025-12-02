#include <iostream>
using namespace std;

float* findMax(float *arr, int size) {
    float *max1 = arr;          
    float *max2 = arr;          


    if (*(arr+1) > *arr) {
        max1 = arr + 1;
        max2 = arr;
    } else {
        max1 = arr;
        max2 = arr + 1;
    }

    
    for (int i = 2; i < size; i++) {
        if (*(arr + i) > *max1) {
            max2 = max1;
            max1 = arr + i;
        }
        else if (*(arr + i) > *max2) {
            max2 = arr + i;
        }
    }

    return max2;   
}

int main() {
    float arr[] = {4.5, 3.3, 0.5, 4.57};

    float *result = findMax(arr, 4);

    cout << "Second highest = " << *result;

    return 0;
}
