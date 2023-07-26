#include<bits/stdc++.h>

using namespace std;


// int removeDuplicate(vector<int> arr, int n) {
//     int i = 0;
//     for (int j = 1; j < n; j++) {
//         if (arr[j] != arr[i]) {
//             arr[i + 1] = arr[j];
//             i++;
//         }
//     }

//     return i + 1;
// }


void pattern(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << "*" << " ";
        }

        cout << endl;
    }
}

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 

    int n;
    cin >> n;

    bool flag = true;

    for (int i = 2; i < sqrt(n); i++) {
        if (n % i == 0) {
            flag = false;
            break;
        }
    }

    if (flag) cout << "Prime number" << endl;
    else cout << "Non prime number" << endl;

    return 0;

}