#include<bits/stdc++.h>

using namespace std;


int countSetBits(int n) {
	int count = 0;
	while (n != 0) {
		if (n & 1 == 1) count++;
		n >>= 1;
	}

	return count;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;
    cout << countSetBits(n) << "\n";
}