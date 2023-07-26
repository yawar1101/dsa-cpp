#include <bits/stdc++.h>

using namespace std;

vector<int> disappear(vector<int> arr, int n) {
	vector<int> temp(n);
	for (int i = 0; i < n; i++) {
		int correct_idx = arr[i] - 1;
		temp[correct_idx] = arr[i];
	}

	vector<int> ans;

	for (int i = 0; i < temp.size(); i++) {
		if (temp[i] == 0) ans.push_back(i + 1);
	}
	return ans;
} 

// Optimal Approach

// Use of Cyclic sort as elements are in range of [1, n]

vector<int> disappearOptimal(vector<int> &arr, int n) {
	int i = 0;
	while (i < n) {
		int correct_idx = arr[i] - 1;
		if (arr[i] != arr[correct_idx]) {
			swap(arr[i], arr[correct_idx]);
		}
		else i++;
	}
	vector<int> ans;
	for (int i = 0; i < n; i++) {
		if (arr[i] != (i + 1))
			ans.push_back((i + 1));
	}

	return ans;
}

int main() {
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

    auto ans = disappearOptimal(arr, n);
    for (auto i: ans) cout << i << " ";
    cout << endl;
}