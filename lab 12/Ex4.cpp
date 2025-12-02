#include <iostream>
using namespace std;


int countEven(int *arr, int size) {
    int count = 0;
    int *ptr = arr;   

    for(int i = 0; i < size; i++) {
        if(*ptr % 2 == 0)   
            count++;
        ptr++;              
    }

    return count;
}
int countEven(int *arr, int size);

int main() {
    int arr[6] = {1, 2, 4, 5, 7, 8};

    cout << "Even numbers: " << countEven(arr, 6);
}
