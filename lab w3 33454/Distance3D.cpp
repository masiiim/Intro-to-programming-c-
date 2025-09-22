
#include <iostream>
#include <cmath>  

using namespace std;

int main() {
    int x, y, z;

   
    cout << "Enter the x-coordinate: ";
    cin >> x;
    cout << "Enter the y-coordinate: ";
    cin >> y;
    cout << "Enter the z-coordinate: ";
    cin >> z;

    
    double distance = sqrt(x * x + y * y + z * z);

   
    cout << "The 3D Euclidean distance from the point (" << x << ", " << y << ", " << z << ") to the origin is: " << distance << endl;

    return 0;
}