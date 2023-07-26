#include <bits/stdc++.h>

using namespace std;

void bubbleSort(vector<int> &arr, int n) {
	for (int i = 0; i < n - 1; i++) {
		// n - i - 1 -> Because end part is sorted after every pass i.e. correct element is already placed after every pass

		bool flag = false;
		for (int j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
				flag = true;
			}
		}

		if (flag == false) 
			break;
	}
}

void insertionSort(vector<int> &arr, int n) {
	for (int i = 0; i < n; i++) {
		int j = i;
		while (j > 0 && arr[j] < arr[j - 1]) {
			swap(arr[j], arr[j - 1]);
			j--;
		}
	}
}

void selectionSort(vector<int> arr, int n) {

	for (int i = 0; i < n - 1; i++) {
		int miniIdx = i;
		for (int j = i; j < n; j++) {
			if (arr[j] < arr[miniIdx]) miniIdx = j;
		}
		swap(arr[i], arr[miniIdx]);
		
	}


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


    // bubbleSort(arr, n);
    // insertionSort(arr, n);
    selectionSort(arr, n);

    // Display the elements

    for (auto &i: arr) {
    	cout << i << " ";
    }

    cout << endl;

	return 0;
}