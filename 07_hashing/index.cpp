#include<bits/stdc++.h>

using namespace std;

void getNumCount(int arr[], int size) {
    // sorted
    map<int, int> mpp;

    // not sorted
    unordered_map<int, int> ump;

    for(int i=0; i<size; i++) {
        mpp[arr[i]]++;
        ump[arr[i]]++;
    }

    for(auto it: mpp) {
        cout << it.first << " -> " << it.second << "\n";
    }

    for(auto it: ump) {
        cout << it.first << " -> " << it.second << "\n";
    }
}

int main() {
    int nums[6] = {1, 2, 3, 2, 5, 1};
    
    getNumCount(nums, 6);

    return 0;
}