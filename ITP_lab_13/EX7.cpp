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
    Student s1, s2;

    cout << "Enter Student 1 Name: ";
           
getline(cin, s1.name);  

    cout << "Enter CGPA: ";
    cin >> s1.cgpa;

    cout << "Enter 3 Courses (name and GPA):\n";
    for (int i = 0; i < 3; i++) {
        cout << "Course " << i + 1 << " name: ";
        cin >> s1.courses[i].name;
        cout << "GPA: ";
        cin >> s1.courses[i].gpa;
    }

    cout << "Enter Address (street city state zip): ";
    cin >> s1.address.street >> s1.address.city >> s1.address.state >> s1.address.zip;


    cout << "\nEnter Student 2 Name: ";
    getline(cin, s2.name); 

    cout << "Enter CGPA: ";
    cin >> s2.cgpa;

    cout << "Enter 3 Courses (name and GPA):\n";
    for (int i = 0; i < 3; i++) {
        cout << "Course " << i + 1 << " name: ";
        cin >> s2.courses[i].name;
        cout << "GPA: ";
        cin >> s2.courses[i].gpa;
    }

    cout << "Enter Address (street city state zip): ";
    cin >> s2.address.street >> s2.address.city >> s2.address.state >> s2.address.zip;

 
    cout << "\n GPA Comparison for Each Course \n";
    for (int i = 0; i < 3; i++) {
        cout << "Course: " << s1.courses[i].name << " → ";
        if (s1.courses[i].gpa > s2.courses[i].gpa)
            cout << s1.name << " has higher GPA\n";
        else if (s2.courses[i].gpa > s1.courses[i].gpa)
            cout << s2.name << " has higher GPA\n";
        else
            cout << "Both have equal GPA\n";
    }

    
    cout << "\n Overall CGPA Comparison \n";
    if (s1.cgpa > s2.cgpa)
        cout << s1.name << " has higher overall CGPA.\n";
    else if (s2.cgpa > s1.cgpa)
        cout << s2.name << " has higher overall CGPA.\n";
    else
        cout << "Both students have equal CGPA.\n";

    return 0;
}
