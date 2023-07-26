#include<bits/stdc++.h>


using namespace std;


// vector<int> rotateOne(vector<int>& arr, int n) {
//     int temp = arr[0];
//     for (int i = 1; i < n; i++) {
//         arr[i - 1] = arr[i];
//     }

//     arr[n - 1] = temp;
//     return arr;
// }


int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    // int n, k;
    // cin >> n >> k;

    // int cnt = 0;

    // int arr[n];

    // for (int i = 0; i < n; i++) {
    // 	cin >> arr[i];
    // }

    // for (int i = 0; i < n; i++) {
    // 	if (arr[i] >= arr[k - 1] && arr[i] > 0) cnt++;
    // }

    // cout << cnt << endl;
    // int n;
    // cin >> n;
    // string s;
    // int x = 0;
    // for (int i = 0; i < n; i++) {
    // 	cin >> s;
    // 	if (s[0] == '+' || s[1] == '+') x++;
    // 	else x--;
    // }

    // cout << x << endl;

    // return 0;

    // int n;
    // cin >> n;

    // vector<int> arr(n);
    // for (int i = 0; i < n; i++) {
    //     cin >> arr[i];
    // }

    // cout << rotateOne(arr, arr.size()) << endl;

    // return 0;


    // int c;

    // cout << sizeof(c) << endl;

    // int arr[1001];

    string s;
	getline(cin, s);

	// int index = 0;

	// for (int i = 0; i < s.size(); i++) {
	// 	if (s[i] == '+') continue;
	// 	else arr[index++] = s[i] - '0';
	// }
    
	// sort(arr, arr + index);

	// for (int i = 0; i < index; i++) {
	// 	cout << arr[i];
	// 	if (i == index - 1) break; 
	// 	cout << "+";
	// }

	// return 0;

	s[0] = towupper(s[0]);

	cout << s << endl;
}