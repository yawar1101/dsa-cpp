#include<iostream>

using namespace std;

void print(char *c) {
    c[0] = 'A';
    while (*c != '\0') {
        cout << *c << " ";
        c++;
    }
    cout << endl;
}

int main() {
    char c1[] = "Hello";
    cout << c1[1] << endl;

}