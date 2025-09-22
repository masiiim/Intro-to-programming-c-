
#include <iostream>
using namespace std;

int main() {
    int x;

   
    cout << "Enter the score: ";
    cin >> x;
   

 
    if (x >=90 && x<= 100) {
            cout << "A." << endl; 
    }
    else if (x >=80 && x<= 89) {
        
            cout << "B." << endl;
            }
    else if (x >=70 && x<= 79) {
            cout << "C." << endl;
        }
else if (x >=60 && x<= 69) {
             cout << "C." << endl;
        }
    
else {
       cout << "F." << endl;
    }

    return 0;
}