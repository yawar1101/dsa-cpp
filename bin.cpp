#include <bits/stdc++.h>

using namespace std;

void getBin(int num) {
	vector<int> ans;

	while (num > 0) {
		ans.push_back(num % 2);
		num /= 2;
	}

	for (int i = ans.size() - 1; i >= 0; i--) {
		cout << ans[i];
	}
}

string getHex(int num) {
	string ans = "";

	while (num > 0) {
		int rem = num % 16;
		char ch;
		if (rem < 10) {
			ch = rem + 48;
		}
		else ch = rem + 87;

		ans = ch + ans;
		num /= 16;
	}
	return ans;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int num;
    cin >> num;

    // getBin(num);	

    cout << getHex(num) << endl;
}