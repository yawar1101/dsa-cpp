#include <bits/stdc++.h>

using namespace std;

void sortArray(vector<int> &arr, int n) {
	int i = 0;
	while (i < n) {
		if (arr[i] == (i + 1)) i++;
		else swap(arr[i], arr[arr[i] - 1]);
	}
}

void printArray(vector<int> &arr) {
	for (int i: arr) cout << i << " ";
	cout << endl;
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

    sortArray(arr, n);

    printArray(arr);


}