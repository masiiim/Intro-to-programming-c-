#include <iostream>
using namespace std;


bool found(int* s, int size, int num, int index = 0) {
    if (index >= size)  
        return false;
    if (s[index] == num) 
        return true;
    return found(s, size, num, index + 1); 
}

int main() {
    int A[10] = {0};
    cout<<"INPUT ARRAY: ";
    for(int i=0; i<10; i++){
        cin>>A[i];
    }
    cout << "INPUT: ";
    int num;
    cin >> num;

    bool result = found(A, 10, num);

    if (result) {
        cout << "YES! It is found.";
    } else {
        cout << "NO! It is not found.";
    }

    return 0;
}
