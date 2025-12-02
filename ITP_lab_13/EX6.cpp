#include <iostream>
using namespace std;


struct phone {
    int areaCode;
    int exchange;
    int number;
};


void displayPhone(const phone &p) {
    cout << "(" << p.areaCode << ") " 
         << p.exchange << "-" 
         << p.number << endl;
}

int main() {
    
    phone p1 = {212, 767, 8900};

    
    phone p2;
    cout << "Enter phone number details:\n";
    cout << "Area code: ";
    cin >> p2.areaCode;
    cout << "Exchange: ";
    cin >> p2.exchange;
    cout << "Number: ";
    cin >> p2.number;

    
    cout << "\nPhone number 1: ";
    displayPhone(p1);

    cout << "Phone number 2: ";
    displayPhone(p2);

    return 0;
}
