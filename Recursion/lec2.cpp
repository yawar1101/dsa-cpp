#include<bits/stdc++.h>

using namespace std;

// void foo(int i, int n) {
//     if (i > n) return;
//     cout << "Yawar" << endl;
//     foo(i + 1, n);
// }

// Print 1 - n

// void foo(int i, int n) {
//     if (i > n) return;
//     cout << i << " ";
//     foo(i + 1, n);
// }

// using backtrack

// void foo(int i, int n) {
//     if (i < 1) return;
//     foo(i - 1, n);
//     cout << i << " ";
// }

// Print n - 1

// void foo(int i, int n) {
//     if (i < 1) return;
//     cout << i <<  " ";
//     foo(i - 1, n);
// }

// using backtrack

void foo(int i, int n) {
    if (i > n) return;
    foo(i + 1, n);
    cout << i << " ";
}



int main() {
    int n;
    cin >> n;

    foo(1, n);
    cout << endl;
}