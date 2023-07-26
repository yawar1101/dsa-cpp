#include <bits/stdc++.h>

using namespace std;

int oddLength(vector<int> arr) {
	int n = arr.size(), sum = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j += 2) {
			for (int k = i; k <= j; k++) {
				sum += arr[k];
			}
		}
	}
	return sum;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    vector<int> arr = {1, 5, 3, 1, 2};

    cout << oddLength(arr) << endl;
	return 0;
}