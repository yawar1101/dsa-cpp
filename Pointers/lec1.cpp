#include<iostream>

using namespace std;

int main() {
    // int a = 10;
    // int *p;
    // p = &a;
    // cout << a << endl;
    // *p = 16;        // Modifying the value of a
    // cout << a << endl;
    // float f = 1.14;
    // float *p = &f; // Pointer to float
    // cout << sizeof(f) << endl;
    // cout << p << endl;
    // cout << p + 1 << endl;
    // cout << *p << endl;
    // cout << *(p + 1) << endl;
    // int a = 980;
    // int *p = &a;
    // cout << p << endl;      // address of a
    // char *p0;
    // p0 = (char*)p;
    // cout << p0 << endl;
    int arr[] = {1, 2, 3, 4};

    for (int i = 0; i < 4; i++) {
        cout << *(arr + i) << endl;
    }

    cout << *arr << endl;
    cout << &arr << endl;
    cout << & *(arr + 1) << endl;           // Address of 1st element
    cout << *(arr + 1) << endl;             // 1st element
    cout << (arr + 2) << endl;           // Address of 2nd element
    cout << *(arr + 2) << endl;             // 2nd element
    cout << *(arr + 4) << endl;             // element does not exist
    return 0;
}