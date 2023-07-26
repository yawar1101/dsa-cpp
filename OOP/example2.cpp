#include<iostream>

using namespace std;

class B;

class A {
    int val1;
    public:
        void setValue(int a1) {
            val1 = a1;
        }

        void display() {
            cout << val1 << endl;
        }
    
    friend void exchange(A &, B &);
};



class B {
    int val2;
    public:
        void setData(int a2) {
            val2 = a2;
        }

        void display() {
            cout << val2 << endl;
        }

    friend void exchange(A &, B &);
};

void exchange(A &o1, B &o2) {
    int temp = o1.val1;
    o1.val1=  o2.val2;
    o2.val2 = temp;
}

int main() {
    A obj1;
    obj1.setValue(1);
    B obj2;
    obj2.setData(12);

    exchange(obj1, obj2);

    cout << "Value of object1: " << endl;
    obj1.display();


    cout << "Value of object2: " << endl;
    obj2.display();


    return 0;
}
