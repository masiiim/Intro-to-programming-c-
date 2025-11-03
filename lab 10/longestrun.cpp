#include<iostream>
using namespace std;

void longest(char arr[], int n) {

    int mcount = 1;
    int ccount = 1;
    char mchar = arr[0];

    for (int i = 1; i < n; i++) {

        if (arr[i] == arr[i - 1]) {
            ccount++;
        } else {
            if (ccount > mcount) {
                mcount = ccount;
                mchar = arr[i - 1];
            }
            ccount = 1;
        }
    }

    if (ccount > mcount) {
        mcount = ccount;
        mchar = arr[n - 1];
    }

    cout << "Longest run: " << mcount << " consecutive " << mchar << "s" << endl;
}

int main() {

    char arr[100];
    int n = 0;

    cout << "Enter numbers (no spaces, end with Enter): ";
    cin >> arr;

    while (arr[n] != '\0') {
        n++;
    }

    longest(arr, n);

    return 0;
}
