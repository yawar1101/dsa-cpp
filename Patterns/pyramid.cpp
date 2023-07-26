#include<bits/stdc++.h>

using namespace std;

void pattern(int n) {
    for (int i = 0; i < n; i++) {
        // Print the spaces;

        for (int j = 0; j < n - i - 1; j++) 
            cout << " ";

        // Print the number;

        for (int j = 1; j <= 2 * i + 1; j++) 
            cout << j;

        // Print the spaces;

        for (int j = 0; j < n - i - 1; j++) 
            cout << " ";

        cout << endl;

    }

}

int main() {
    int n;
    cin >> n;
    pattern(n);
}