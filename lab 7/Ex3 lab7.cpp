#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    int matrix[50][50]; 

    
    cout << "Enter matrix elements: ";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

   
    cout << "\nYour matrix is:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    
    int maxElement = matrix[0][0];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] > maxElement)
                maxElement = matrix[i][j];
        }
    }

    cout << "Maximum element is: " << maxElement << endl;

    return 0;
}
