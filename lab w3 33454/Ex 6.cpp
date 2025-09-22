#include <iostream>
using namespace std;

int main() {
    double cse141, cse141lab, cse578;
    double sum141 = 0, sum141lab = 0, sum578 = 0;

    cout << "Enter grades for 10 students: "<<endl;

    for (int i = 0; i < 10; i++) {
        cout << "\nStudent " << i+1 << ":\n";
        cout << "  CSE141: ";
        cin >> cse141;
        cout << "  CSE141-lab: ";
        cin >> cse141lab;
        cout << "  CSE578: ";
        cin >> cse578;

        
        sum141 += cse141;
        sum141lab += cse141lab;
        sum578 += cse578;
    }

    
    double avg141 = sum141 / 10;
    double avg141lab = sum141lab / 10;
    double avg578 = sum578 / 10;

    double overallAvg = (sum141 + sum141lab + sum578) / (30);

    
    cout << "\n----- Results -----\n";
    cout << "Average in CSE141     = " << avg141 << endl;
    cout << "Average in CSE141-lab = " << avg141lab << endl;
    cout << "Average in CSE578     = " << avg578 << endl;
    cout << "Overall Average (all students, all courses) = " << overallAvg << endl;

    return 0;
}
