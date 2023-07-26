#include<bits/stdc++.h>

using namespace std;

int getMajorElement(vector<int> arr, int n) {
	for (int i = 0; i < n; i++) {
		int count = 0;
		for (int j = 0; j < n; j++) {
			if (arr[i] == arr[j]) count++;
		}
		if (count > (n / 2)) return arr[i];
	}

	return -1;
}


int getMajorElementBetter(vector<int> arr, int n) {

	map<int, int> mp;

    for (int i = 0; i < arr.size(); i++) {
    	mp[arr[i]]++;
    }

    for (auto i: mp) {
    	if (i.second > (n / 2)) return i.first;
    }

    return -1;

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


  	
    // for (auto i: mp) cout << i.first << " " << i.second << endl; 


    cout << getMajorElementBetter(arr, n) << endl;




	return 0;
}