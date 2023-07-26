#include<bits/stdc++.h>

using namespace std;   

void reversal(vector<int> &arr, int start, int end) {
        while (start < end) {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
}

void rotate(vector<int>& nums, int k) {
        if (k == 0) return;
        
        int n = nums.size();
        k = k % n;
        reversal(nums, 0, n - k - 1);
        reversal(nums, n - k, n - 1);
        reversal(nums, 0, n - 1);        
}

void rotateExtra(vector<int> &nums, int k) {
    
    int n = nums.size();
    k = k % n;
    vector<int> temp(n);
    int index = 0;
    for (int i = n - k; i < n; i++) {
        temp[index] = nums[i];
        index++;
    }


    for (int i = 0; i < k + 1; i++) {
        temp[index] = nums[i];
        index++;
    }

    for (int i = 0; i < n; i++) {
        nums[i] = temp[i];
    }


    // for (auto i: temp) {
    //     cout << i << " ";
    // }
    // cout << "\n";
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

    int k; 
    cin >> k;

    // rotate(arr, k);


    rotateExtra(arr, k);

    for (auto i: arr) {
        cout << i << " ";
    } 
    cout << endl;
}

