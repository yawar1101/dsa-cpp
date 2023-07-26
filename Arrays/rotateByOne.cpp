#include<bits/stdc++.h>
#include<iostream>

using namespace std;

void rotateOne(int arr[], int n) {
    int temp = arr[0];
    for (int i = 1; i < n; i++) {
        arr[i - 1] = arr[i];
    }

    arr[n - 1] = temp;

    // Print the elements

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
}

int main() {

    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    rotateOne(arr, n);


    return 0;
}