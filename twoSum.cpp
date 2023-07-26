#include <bits/stdc++.h>

using namespace std;

vector<int> twoSumIndices(vector<int> arr, int target) {
	int n = arr.size();
	vector<int> ans;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[i] + arr[j] == target) {
				ans.push_back(i);
				ans.push_back(j);
				return ans;
			}
		}
	}

	return {-1, - 1};
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, target;
    cin >> n >> target;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
    	cin >> arr[i];
    }


   	vector<int> ans = twoSumIndices(arr, target);
   	cout << ans[0] << " " << ans[1] << endl;
}