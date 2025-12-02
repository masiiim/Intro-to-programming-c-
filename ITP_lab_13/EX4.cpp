#include <iostream>
using namespace std;

bool palindrom(string s, int start, int end) {

    
    if (start >= end)
        return true;

    
    if (s[start] != s[end])
        return false;

    
    return palindrom(s, start + 1, end - 1);
}

int main() {

    string s;
    cout << "INPUT: ";
    cin >> s;

    bool result = palindrom(s, 0, s.length() - 1);

    if (result) {
        cout << "YES! It is a palindrome.";
    } else {
        cout << "NO! It is not a palindrome.";
    }

    return 0;
}
