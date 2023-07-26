#include<iostream>

using namespace std;


class Complex;


class Calculator {
    public:
        int add(int a, int b) {
            return (a + b);
        }

        int sumRealComplex(Complex, Complex);
};


class Complex {
    int a, b;
    friend class Calculator;
    public:
        void setParts(int n1, int n2) {
            a = n1;
            b = n2;
        }

        friend Complex sumComplex(Complex c1, Complex c2);

        void print() {
            cout << "Complex Number is " << a << " + " << b << "i" << endl;
        }
};

// Complex sumComplex(Complex c1, Complex c2) {
//     Complex c3;
//     c3.setParts((c1.a + c2.a), (c1.b + c2.b));
//     return c3;
// }


int Calculator :: sumRealComplex(Complex o1, Complex o2) {
    return (o1.a + o2.a);
}

int main() {

    Complex o1, o2;
    o1.setParts(3, 4);
    o2.setParts(5, 1);
    Calculator calc;
    int res = calc.sumRealComplex(o1, o2);

    cout << "The sum of real part is = " << res << endl;
    return 0;

}