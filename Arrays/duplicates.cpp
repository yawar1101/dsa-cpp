#include<bits/stdc++.h>

using namespace std;

int removeDuplicates(vector<int> arr, int n) {
    
    // Brute force

    // set<int> st;

    // for (int i = 0; i < n; i++) {
    //     st.insert(arr[i]);
    // }

    // int index = 0;
    // for (auto it: st) {
    //     arr[index] = it;
    //     index++;
    // }

    // return index;

    // Optimal -> 2 - pointer

    int i = 0;
    for (int j = 1; j < n; j++) {
        if (arr[j] != arr[i]) {
            arr[i + 1] = arr[j];
            i++;
        }
    }

    return (i + 1);
}

int main() {
    vector<int> arr = {0,0,1,1,1,2,2,3,3,4};
    cout << removeDuplicates(arr, arr.size()) << endl;
}