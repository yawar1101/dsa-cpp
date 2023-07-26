#include<bits/stdc++.h>

using namespace std;

int maxConsecutiveOnes(vector<int> arr) {
	int maxi = 0;
	for (int i = 0; i < arr.size(); i++) {
		int count = 0;
		if (arr[i] == 1) {
			count++;
			maxi = max(maxi, count);
		}
	}

	return maxi;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

	// vector<int> prices;
	// int val;
	// while (cin >> val) {
	// 	prices.push_back(val);
	// }

	// auto ans = maxConsecutiveOnes(prices);
	// cout << ans;

	int n, rev = 0;
	cin >> n;
	while (n != 0) {
		int r = n % 10;
		rev = rev * 10 + r;
		n /= 10;
	}
	cout << rev << endl;

}