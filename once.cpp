#include<bits/stdc++.h>

using namespace std;

void getElement(vector<int> arr) {
	for (int i = 0; i < arr.size(); i++) {
		int num = arr[i];
		int count = 0;
		for (int j = 0; j < arr.size(); j++) {
			if (arr[j] == num) count++;
		}
		if (count == 1) {
		 cout << num;
		 break;
		}
	}
}


int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;
    // int rev = 0;
    // vector<int> arr(n);
    // for (int i = 0; i < n; i++) {
    // 	cin >> arr[i];
    // }

    for (int i = 1; i * i * i <= n; i++) {
    	cout << i * i * i << endl;
    }



    // getElement(arr);
    // cout << ans;

}