#include <iostream>
#include <ctime>    
using namespace std;

int main() {
    srand(time(0)); 
    int x, y, s, l, uanswer;
    int ccount = 0, wcount = 0;

    while (true) {
        
        x = 1 + (int)((double)rand() / RAND_MAX * 10);
        y = 1 + (int)((double)rand() / RAND_MAX * 10);


        
        if (x < y) {
            s = x;
            l = y;
        } else {
            s = y;
            l = x;
        }

        cout << "What is " << s << " * " << l << " ? (Enter -1 to quit): ";
        cin >> uanswer;

        
        if (uanswer == -1) {
            cout << "\nFinal Results:" << endl;
            cout << "Correct Answers: " << ccount << endl;
            cout << "Wrong Answers: " << wcount << endl;
            break;
        }

        
        if (uanswer == s * l) {
            cout << "Correct! " << endl;
            ccount++;
        } else {
            cout << "Wrong! correct answer is " << (s * l) << endl;
            wcount++;
        }
    }

    return 0;
}
