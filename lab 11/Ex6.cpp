#include <iostream>
using namespace std;

void SentenceCase(char *Text, int *size) {
    bool capitalizeNext = true;   

    for (int i = 0; i < *size; i++) {
        char &c = Text[i];

        if (capitalizeNext && c >= 'a' && c <= 'z') {
            c = c - ('a' - 'A');   
            capitalizeNext = false;
        }
        else if (!capitalizeNext && c >= 'A' && c <= 'Z') {
            c = c + ('a' - 'A');   
        }

        
        if (c == '.') {
            capitalizeNext = true;
        }
    }
}

int main() {
    int N;
    cout << "Enter number of characters: ";
    cin >> N;

    cin.ignore();  

    char *text = new char[N];

    cout << "Enter text: ";
    cin.getline(text, N);

    int size = N;

    SentenceCase(text, &size);

    cout << "\nSentence Case Output:\n";
    cout << text << endl;

    delete[] text;
    return 0;
}
