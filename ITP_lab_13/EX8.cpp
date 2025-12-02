#include <iostream>
#include <string>
using namespace std;


struct Course {
    string name;
    float gpa;
};


struct Address {
    string street;
    string city;
    string state;
    int zip;
};


struct Student {
    string name;
    float cgpa;
    Course courses[3]; 
    Address address;
};

int main() {
    int N;
    cout << "Enter the number of students: ";
    cin >> N;
    cin.ignore(); 

    Student students[N];

    
    for (int i = 0; i < N; i++) {
        cout << "\nEnter details for student " << i + 1 << ":\n";
        
        cout << "Name: ";
        getline(cin, students[i].name);

        cout << "CGPA: ";
        cin >> students[i].cgpa;
        cin.ignore();

        
        for (int j = 0; j < 3; j++) {
            cout << "Course " << j + 1 << " name: ";
            getline(cin, students[i].courses[j].name);
            cout << "Course " << j + 1 << " GPA: ";
            cin >> students[i].courses[j].gpa;
            cin.ignore();
        }

        
        cout << "Street: ";
        getline(cin, students[i].address.street);
        cout << "City: ";
        getline(cin, students[i].address.city);
        cout << "State: ";
        getline(cin, students[i].address.state);
        cout << "ZIP code: ";
        cin >> students[i].address.zip;
        cin.ignore();
    }

    
    cout << "\nStudent Details\n";
    for (int i = 0; i < N; i++) {
        cout << "\nStudent " << i + 1 << ":\n";
        cout << "Name: " << students[i].name << "\n";
        cout << "CGPA: " << students[i].cgpa << "\n";
        for (int j = 0; j < 3; j++) {
            cout << "Course " << j + 1 << ": " << students[i].courses[j].name 
                 << ", GPA: " << students[i].courses[j].gpa << "\n";
        }
        cout << "Address: " << students[i].address.street << ", "
             << students[i].address.city << ", "
             << students[i].address.state << ", "
             << students[i].address.zip << "\n";
    }

    return 0;
}
