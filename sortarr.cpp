#include <bits/stdc++.h>

using namespace std;

bool isSort(vector<int> arr, int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = (i + 1) ;j < n; j++) {
			if (arr[j] < arr[i]) return false;
		}
	}
	return true;
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

	cout << isSort(arr, n) << endl;

	return 0;    
}    