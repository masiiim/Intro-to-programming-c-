#include <iostream>
using namespace std;

int main() {
    float fsc, nts;

    cout << "Enter your F.Sc percentage: ";
    cin >> fsc;
    cout << "Enter your NTS percentage: ";
    cin >> nts;

    
    if (fsc > 70 && nts > 70) {
        cout << "Congratulations! You got admission in Oxford University (IT Department)." << endl;
    }
    else if (fsc > 70 && nts > 60) {
        cout << "Congratulations! You got admission in Oxford University (Electronics Department)." << endl;
    }
    else if (fsc > 70 && nts > 50) {
        cout << "Congratulations! You got admission in Oxford University (Telecommunication Department)." << endl;
    }

    
    else if ((fsc >= 60 && fsc <= 70) && nts >= 50) {
        cout << "Congratulations! You got admission in MIT (IT Department)." << endl;
    }
    else if ((fsc >= 50 && fsc <= 59) && nts >= 50) {
        cout << "Congratulations! You got admission in MIT (Chemical Department)." << endl;
    }
    else if ((fsc > 40 && fsc < 50) && nts >= 50) {
        cout << "Congratulations! You got admission in MIT (Computer Department)." << endl;
    }
    else {
        cout << "Sorry, you are not eligible for admission in the given universities." << endl;
    }

    return 0;
}
