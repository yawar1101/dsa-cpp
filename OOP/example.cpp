#include<iostream> 

using namespace std;

class Two;

class One {
    int data;
    public:
        void setData(int value) {
            data = value;
        }
    friend void addTwoObjects(One, Two);
};

class Two {
    int num;
    public:
        void setNum(int value) {
            num = value;
        }
    friend void addTwoObjects(One, Two);
};

void addTwoObjects(One o1, Two t1) {
    cout << "Summation of two objects is " << o1.data + t1.num << endl;
}

int main() {
    One o1;
    o1.setData(5);

    Two t1;
    t1.setNum(3);

    addTwoObjects(o1, t1);

    return 0;
}