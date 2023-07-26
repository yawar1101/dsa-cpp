#include<bits/stdc++.h>

using namespace std;

int printMaxi(vector<int> arr, int n) {
	int maxSum = INT_MIN;
	int sumSoFar = 0;

	for (auto i: arr) {
		sumSoFar += i;
		if (sumSoFar < 0)
			sumSoFar = 0;
		maxSum = max(maxSum, sumSoFar);
	}

	return maxSum;
}

void maxSumSubArray(vector<int> arr, int n) {
	int maxi = INT_MIN;
	int sumSoFar = 0;
	int start = 0, ansStart = -1, ansEnd = -1;

	for (int i = 0; i < n; i++) {
		if (sumSoFar == 0) start = i;

		sumSoFar += arr[i];
		if (sumSoFar > maxi) {
			maxi = sumSoFar;
			ansStart = start;
			ansEnd = i;
		}

		if (sumSoFar < 0) {
			sumSoFar = 0;
		}
	}

	cout << "Subarray is: [";
	for (int i = ansStart; i <= ansEnd; i++) {
		cout << arr[i] << " ";
	}
	cout << "]" << endl;
}


int main () {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
    	cin >> arr[i];
    }

    // cout << printMaxi(arr, n) << endl;
    maxSumSubArray(arr, n);
}