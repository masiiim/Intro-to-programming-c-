
#include <iostream>
using namespace std;

int main() {
    int x, y;

   
    cout << "Enter the x-coordinate: ";
    cin >> x;
    cout << "Enter the y-coordinate: ";
    cin >> y;

 
    if (x > 0) {
        if (y > 0) {
            cout << "The point is in Quadrant 1." << endl; 
        } else if (y < 0) {
            cout << "The point is in Quadrant 4." << endl; 
        } else {
            cout << "The point is on the positive x-axis." << endl; 
        }
    } else if (x < 0) {
        if (y > 0) {
            cout << "The point is in Quadrant 2." << endl;
        } else if (y < 0) {
            cout << "The point is in Quadrant 3." << endl;
        } else {
            cout << "The point is on the negative x-axis." << endl;
        }
    } else {
        if (y > 0) {
            cout << "The point is on the positive y-axis." << endl; 
        } else if (y < 0) {
            cout << "The point is on the negative y-axis." << endl; 
        } else {
            cout << "The point is at the origin." << endl; 
        }
    }

    return 0;
}