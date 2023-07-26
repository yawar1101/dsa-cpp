#include<bits/stdc++.h>

using namespace std;

// Parameterized

void sum(int i, int s) {
    if (i < 1) {
        cout << "Sum = " << s;
        return;
    }
    sum(i - 1, s + i);
}

// Functional 

int foo(int n) {
    if (n == 0) return 0;
    return(n + foo(n - 1));
}

// Factorial of n

int fact(int n) {
    if (n == 0) return 1;
    return(n * fact(n - 1));
}

// Reverse an array

// void rev(int arr[], int l, int r) {
//     if (l >= r) return;
//     swap(arr[l], arr[r]);
//     rev(arr, l + 1, r - 1);
// }

// Using a single pointer

void rev(int arr[], int i, int n) {
    if (i >= n / 2) return;
    swap(arr[i], arr[n - i - 1]);
    rev(arr, i + 1, n);
}


// Palindrome string

bool isPalin(int i, string s) {
    if (i >= s.size() / 2) return true;
    if (s[i] != s[s.size() - i - 1]) return false;
    return(isPalin(i + 1, s));
}

int main() {
    // int n;
    // cin >> n;
    // cout << "Sum = " << foo(n);

    // cout << "Factorial of " << n << " is = " << fact(n);
    // int arr[n];
    // for (int i = 0; i < n; i++) {
    //     cin >> arr[i];
    // }

    // rev(arr, 0, n);

    // cout << "Reversed array " << endl;

    // for (int i = 0; i < n; i++) {
    //     cout << arr[i] << " ";
    // }

    cout << isPalin(0, "abba");

    cout << endl;

    return 0;
}