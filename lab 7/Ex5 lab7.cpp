#include <iostream>
using namespace std;

int main() {
    int n;

    
    cout << "Enter size of square matrix (n x n): ";
    cin >> n;

    int matrix[50][50], transpose[50][50];

    
    cout << "Enter matrix elements:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    
    cout << "\nOriginal Matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    
    cout << "\nTranspose of Matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    
    bool isSymmetric = true;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] != transpose[i][j]) {
                isSymmetric = false;
                break;
            }
        }
    }

    
    if (isSymmetric)
        cout << "\nThe matrix is Symmetric.\n";
    else
        cout << "\nThe matrix is Asymmetric.\n";

    return 0;
}
