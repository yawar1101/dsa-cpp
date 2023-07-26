#include <iostream>
#include<bits/stdc++.h>

using namespace std;


vector<int> findUnion(vector<int> arr1, vector<int> arr2, int n, int m) {
	set<int> st;

	for (int i = 0; i < n; i++) {
		st.insert(arr1[i]);
	}

	for (int i = 0; i < m; i++) {
		st.insert(arr2[i]);
	}

	vector<int> ans;

	for (auto i: st) {
		ans.push_back(i);
	}

	return ans;

}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 
    int n, m, a, b;
    cin >> n >> m;
    vector<int> arr1(n);
    vector<int> arr2(m);

    for (int i = 0; i < n; i++) {
    	cin >> a;
    	arr1.push_back(a);
    }

    for (int i = 0; i < m; i++) {
    	cin >> b;
    	arr2.push_back(b);
    }

    auto ans = findUnion(arr1, arr2, n, m);
    cout << ans;

}