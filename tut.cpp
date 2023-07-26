#include <bits/stdc++.h>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
	// string s = "HelloWorld";
	// cout << s << endl;
	// cout << s.length() << endl;
	// cout << s.at(1) << endl;
	// string s1 = "forever";
	// // s.append(s1);
	// // cout << s << endl;
	// int index = s.find('W');
	// cout << index << endl;
	// string s2 = s.substr(index, 5);
	// cout << s2 << endl;

	// char s[] = "Hydrogen Helium Sodium Potassium";
	// char *token = strtok(s, " ");
	// int cnt = 0;
	// while (token != NULL) {
	// 	cnt++;
	// 	// cout << token << endl;
	// 	token = strtok(NULL, " ");
	// }


	// cout << cnt << endl;

	string s = "Hello Yawar How are you";
	int spaces = 0, words = 0;

	for (char w: s) {
		if (w == ' ')
			spaces++;
		else 
			words = spaces + 1;
	}

	cout << spaces << endl;
	cout << words << endl;

	// string s = "Yawar";
	// int n = s.length();

	// vector<vector<int>> arr ={{1, 2, 3}, {4, 5, 6}};
	// int n = arr.size();
	// int x = arr[1].size();
	// cout << n << " " << x << endl;

}