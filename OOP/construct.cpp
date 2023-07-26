#include<iostream>

using namespace std;

class Complex {
    int real, imag;
    public:
        // Default Constructor
        Complex() {
            real = 0;
            imag = 0;
        }

        // Parameterized Constructor
        Complex(int a, int b) {
            real = a;
            imag = b;
        }

        void display() {
            cout << "Complex number is: " << real << " + " << imag << "i" << endl;
        }
};

int main() {
    // Implicit Call

    Complex obj1(3, 4);

    obj1.display();

    // Explicit call 

    Complex obj2 = Complex(2, 5);
    obj2.display();



    return 0;
}