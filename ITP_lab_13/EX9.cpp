#include <iostream>
using namespace std;


struct Complex {
    int real;
    int imag;
};


Complex readComplex() {
    Complex c;
    char plus, i;
    cin >> c.real >> plus >> c.imag >> i; 
    return c;
}


void writeComplex(Complex c) {
    cout << c.real << " + " << c.imag << "i" << endl;
}


Complex addComplex(Complex c1, Complex c2) {
    Complex sum;
    sum.real = c1.real + c2.real;
    sum.imag = c1.imag + c2.imag;
    return sum;
}

Complex multiplyComplex(Complex c1, Complex c2) {
    Complex product;
    product.real = c1.real * c2.real - c1.imag * c2.imag;
    product.imag = c1.real * c2.imag + c1.imag * c2.real;
    return product;
}

int main() {
    cout << "Enter first complex number (a + bi): ";
    Complex c1 = readComplex();

    cout << "Enter second complex number (a + bi): ";
    Complex c2 = readComplex();

    Complex sum = addComplex(c1, c2);
    Complex product = multiplyComplex(c1, c2);

    cout << "\nSum: ";
    writeComplex(sum);

    cout << "Product: ";
    writeComplex(product);

    return 0;
}
