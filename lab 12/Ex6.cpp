#include <iostream>
using namespace std;


void replaceChar(char *text, char oldC, char newC) {

    char *ptr = text;   

    while  (*ptr != '\0') {   
        if (*ptr == oldC)
            *ptr = newC;

        ptr++;   
    }
}


int main() {
    char str[] = "hello world";

    replaceChar(str, 'l', 'x');

    cout << "Updated string: " << str << endl;

    return 0;
}
