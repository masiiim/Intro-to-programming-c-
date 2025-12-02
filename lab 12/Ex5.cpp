#include <iostream>
using namespace std;

int* mrgarray(int *a, int szA, int *b, int szB) {
    int szT = szA + szB;

    
    int *merged = new int[szT];

    int *ptr = merged;

    
    for(int i = 0; i < szA; i++) {
        *ptr = *(a + i);   
        ptr++;
    }

    
    for(int i = 0; i < szB; i++) {
        *ptr = *(b + i);
        ptr++;
    }

    return merged;
}


int* mrgarray(int *a, int szA, int *b, int szB);

int main() {
    int arr1[4] = {1, 2, 3, 4};
    int arr2[3] = {5, 6, 7};

    int *merged = mrgarray(arr1, 4, arr2, 3);

    cout << "Merged Array: ";
    for(int i = 0; i < 7; i++) {
        cout << *(merged + i) << " ";
    }

    delete[] merged;   
    return 0;
}
