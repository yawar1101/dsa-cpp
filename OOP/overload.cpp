#include<iostream>

using namespace std;

class Complex {

    // Example of constructor overloading, constructor can have different params.

    int x, y;
    public:
        // Complex() {
        //     x = 0;
        //     y = 0;
        // }

        Complex(int a, int b=5 ) {
            x = a;
            y = b;
        }

        // Complex(int a) {
        //     x = a;
        //     y = 0;
        // }

        void print() {
            cout << "Complex number is: " << x << " + " << y << "i" << endl;
        }
};


int main() {

    // Invoking the default constructor

    // Complex c1;
    // c1.print();

    // Invoking the param constructor with 2 params

    Complex c2(4);
    c2.print();

    // Invoking the param constructor with 1 param

    // Complex c3(12);
    // c3.print();

    return 0;
}