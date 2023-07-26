#include<bits/stdc++.h>

using namespace std;

    
vector<int> arrange(vector<int>& nums) {
        vector<int> neg;
        vector<int> pos;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < 0) {
                neg.push_back(nums[i]);
            }
            else {
                pos.push_back(nums[i]);
            }
        }
        
        // return pos;

        int neg_size = neg.size();
        int pos_size = pos.size();
        
        for (int i = 0; i < pos_size; i++) {
            nums[i] = pos[i];
        }
        
        for (int i = 0; i < neg_size; i++) {
            nums[pos_size + i] = neg[i];
        }
        
        return nums;
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

    auto res = arrange(arr);

    for (int i: res) cout << i << " ";

    cout << endl;
}
