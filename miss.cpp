#include<bits/stdc++.h>

using namespace std;


// Brute force(Linear Search)

// int missingNumberB(vector<int> arr, int n) {
// 	for (int i = 1; i <= n; i++) {
// 		bool flag = true;
// 		for (int j = 0; j < n - 1; j++) {
// 			if (arr[j] == i) {
// 				flag = false;
// 				break;
// 			}
// 		}

// 		if (flag) {
// 			return i;
// 		}
// 	}
// }



// Optimal Approach
int missingNumber(vector<int> arr, int n) {
	int sum = n * (n + 1) / 2;
	int arrSum = 0;
	for (auto &i: arr) {
		arrSum += i;
	}

	int ans = sum - arrSum;

	return ans;
}

// Most Optimal Approach
int missingNumberXOR(vector<int> arr, int n) {
	int xor1 = 0, xor2 = 0;
	int N = n - 1;
	for (int i = 0; i < N; i++) {
		xor1 = xor1 ^ arr[i];
		xor2 = xor2 ^ (i + 1);
	}
	xor2 = xor2 ^ n;
	return xor1 ^ xor2;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n - 1; i ++) {
    	cin >> arr[i];
    }



    // for (auto &i : arr) {
    // 	cout << i << " ";
    // }
    // cout << missingNumber(arr, n) << endl;

    // cout << missingNumberB(arr, n) << endl;

    cout << missingNumberXOR(arr, n) << endl;

  	return 0;
}