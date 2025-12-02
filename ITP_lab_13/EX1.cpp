#include <iostream>
using namespace std;

int mult1(int A[2][2], int B[2][2], int i, int j, int k) {
    if (k == 2) return 0;
    return A[i][k] * B[k][j] + mult1(A, B, i, j, k + 1);
}

void mult2(int A[2][2], int B[2][2], int C[2][2], int i = 0, int j = 0) {
    if (i == 2) return;      
    if (j == 2) {             
        mult2(A, B, C, i + 1, 0);
        return;
    }
    C[i][j] = mult1(A, B, i, j, 0);  
    mult2(A, B, C, i, j + 1);      
}

int main() {
    int A[2][2], B[2][2], C[2][2];

    cout << "Enter 2x2 matrix A:\n";
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            cin >> A[i][j];

    cout << "Enter 2x2 matrix B:\n";
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            cin >> B[i][j];

    mult2(A, B, C);

    cout << "Result matrix C:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++)
            cout << C[i][j] << " ";
        cout << endl;
    }

    return 0;
}
