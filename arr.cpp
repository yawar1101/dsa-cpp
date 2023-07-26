#include<bits/stdc++.h>

using namespace std;


void printSubArrays(int *arr, int n) {
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			for (int k = i; k <= j; k++) {
				cout << arr[k];
			}
			cout << endl;
		}
	}
}


void maxSumSubArray(int *arr, int n) {
	vector<int> ans;
	int sum = 0;
	for (int i = 0; i < n; i++) {

		for (int j = i; j < n; j++) {
			int sumSoFar = 0;
			for (int k = i; k <= j; k++) {
				sumSoFar += arr[k];
			}
			sum = max(sum, sumSoFar);
		}
	}

	// for (auto i: ans) {
	// 	cout << i << " ";
	// }
	cout << sum << endl;
}


int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
    	cin >> arr[i];
    }

    // printSubArrays(arr, n);
    maxSumSubArray(arr, n);
    return 0;
}