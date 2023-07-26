#include<bits/stdc++.h>

using namespace std;

void rowsSum(vector<vector<int>> arr, int n, int m) {
	int maxSum = 0;
	for (int i = 0; i < n; i++) {
		int sum = 0;
		for (int j = 0; j < m; j++) {
			sum += arr[i][j];
		}
		// cout << sum << endl;
		maxSum = max(maxSum, sum);
	}
	cout << maxSum;
}


int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
	
	int n, m;
	cin >> n >> m;

	vector<vector<int>> arr(n);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			int num;
			cin >> num;
			arr[i].push_back(num);
		}
	} 

	// for (auto &row: arr) {
	// 	for (auto num: row) {
	// 		cout << num << " ";
	// 	}
	// 	cout << endl;
	// }

	rowsSum(arr, n, m);
}