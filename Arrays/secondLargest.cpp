#include<bits/stdc++.h>


using namespace std;

int secondLarge(vector<int> arr, int n) {

    // Brute force T.C -> O(nlogn)

    sort(arr.begin(), arr.end());


    // int largest = arr[n - 1];

    // int secondLargest = -1;

    // for (int i = n - 2; i >=0;i--) {
    //     if (arr[i] != largest) { 
    //         secondLargest = arr[i];
    //         break;
    //     }
    // }

    // return secondLargest;

    // Better approach
    // First find the largest element

    int largest = arr[0];

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) largest = arr[i];
    }

    // Now check for second largest

    int secondLargest = -1;

    for (int i = 0; i <= n; i++) {
        if (arr[i] > secondLargest && arr[i] != largest) secondLargest = arr[i];
    }

    return secondLargest;
}

// Optimal Approach

int secondLargest(vector<int>arr, int n) {
    int largest = arr[0];
    int secondLargest = INT_MIN;

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }

        else if (arr[i] < largest && arr[i] > secondLargest) secondLargest = arr[i];
    }

    return(secondLargest);
}

int secondSmallest(vector<int> arr, int n) {
    int smallest = arr[0];
    int secondSmallest = INT_MAX;

    for (int i = 1; i < n; i++) {
        if (arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        }

        else if (arr[i] > smallest && arr[i] < secondSmallest) secondSmallest = arr[i];
    }

    return secondSmallest;
}

int main() {

    // int n;
    // cin >> n;
    // vector<int> arr(n);

    // // Take input from the user

    // for (int i = 0; i < n; i++) {
    //     cin >> arr[i];
    // }

    vector<int> arr = {4, 5, 3, 6, 7};

    cout << secondLargest(arr, arr.size()) << endl;
    cout << secondSmallest(arr, arr.size()) << endl;
}