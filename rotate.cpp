#include<bits/stdc++.h>

using namespace std;

// Brute Force -> T.C = O(N) S.C = O(N)

vector<int> moveZerosToEnd(vector<int> arr, int n) {
	vector<int> temp;
	for (int i = 0; i < n; i++) {
		if (arr[i] != 0)
			temp.push_back(arr[i]);
	}

	int tempSize = temp.size();

	// Copying non zero elements back to original array

	for (int i = 0; i < tempSize; i++) {
		arr[i] = temp[i];
	}

	// Pushing zeroes at the end of the original vector

	for (int i = tempSize; i < n; i++) {
		arr[i] = 0;
	}

	return arr;
}


// Optimal(2 Pointer Approach) -> T.C = O(N), S.C = O(1)

vector<int> moveZerosToEndOptimal(vector<int> arr, int n) {
	int j = -1;
	// Find the index of first zero

	for (int i = 0; i < n; i++) {
		if (arr[i] == 0) {
			j = i;
			break;
		}
	}

	if (j == -1) {
		return arr;
	}

	// Swap the non zero element with zero

	for (int i = j + 1; i < n; i++) {
		if (arr[i] != 0) {
			swap(arr[i], arr[j]);
			j++;
		}
	}

	return arr;
}




int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 
    int n;
    cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < arr.size(); i++) {
		cin >> arr[i];
	}

	auto ans = moveZerosToEndOptimal(arr, n);

	for (auto it: ans) {
		cout << it << " ";
	}


	return 0;    
}  