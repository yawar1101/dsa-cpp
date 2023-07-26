#include<iostream>
#include<string>

using namespace std;

class binary {
private:
    string s;
    void chk_bin(void);
public:
    void read(void);

    void ones(void);
    void display(void);
};

void binary :: read(void) {
    cout << "Enter a binary number" << endl;
    cin >> s;
}

// Check if number is binary or not

void binary :: chk_bin(void) {
    for (int i = 0; i < s.length(); i++) {
        if (s.at(i) != '0' && s.at(i) != '1') {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}


// Ones complement of number 

void binary :: ones(void) {
    chk_bin();
    for (int i = 0; i < s.length(); i++) {
        if (s.at(i) == '1') s.at(i) = '0';
        else s.at(i) = '1';
    }
}


void binary :: display(void) {
    for (int i = 0; i < s.length(); i++) cout << s.at(i);

    cout << endl;
}

int main() {
    binary b;
    b.read();
    // b.chk_bin();
    b.ones();
    b.display();
}
