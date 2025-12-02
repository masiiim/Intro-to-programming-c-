#include <iostream>
using namespace std;

int WordCount(char *Text, int *size) {
    int words = 0;
    bool inWord = false;

    for (int i = 0; i < *size; i++) {
        if (Text[i] != ' ' && Text[i] != '\t' && Text[i] != '\n') {
            if (!inWord) {
                words++;
                inWord = true;
            }
        } else {
            inWord = false;
        }
    }

    return words;
}

int main() {
    char text[] = "Hello this is a test string";
    int size = sizeof(text) - 1;   

    int result = WordCount(text, &size);

    cout << "Word count = " << result;

    return 0;
}
