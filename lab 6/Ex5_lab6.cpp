#include <iostream>
using namespace std;

int main() {
    const int SIZE = 10;
    int pass[SIZE], fail[SIZE];  
    int passCount = 0, failCount = 0;
    int marks;

    cout << "Enter quiz marks for students (-1 to stop): " << endl;

    for (int i = 0; i < SIZE; i++) {
        cin >> marks;

        if (marks == -1) break;

        if (marks >= 5 && marks <= 10) {
            pass[passCount++] = marks;
        }
        else if (marks >= 0 && marks < 5) {
            fail[failCount++] = marks;
        }
        else {
            cout << "Invalid mark! Enter between 0-10 or -1 to exit." << endl;
            i--; 
        }
    }

    
    cout << "\nMarks of Pass students: ";
    int passSum = 0;
    for (int i = 0; i < passCount; i++) {
        cout << pass[i] << " ";
        passSum += pass[i];
    }
    if (passCount > 0)
        cout << "\nAverage (Pass) = " << (double)passSum / passCount;
    else
        cout << "\nNo pass student data entered.";

    
    cout << "\n\nMarks of Fail students: ";
    int failSum = 0;
    for (int i = 0; i < failCount; i++) {
        cout << fail[i] << " ";
        failSum += fail[i];
    }
    if (failCount > 0)
        cout << "\nAverage (Fail) = " << (double)failSum / failCount;
    else
        cout << "\nNo fail student data entered.";

    return 0;
}
