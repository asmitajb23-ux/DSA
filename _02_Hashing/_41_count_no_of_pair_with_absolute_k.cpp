#include <bits/stdc++.h>
using namespace std;

int countPairs(vector<int>& nums, int k) {
    unordered_map<int, int> freq;
    int count = 0;

    for (int num : nums) {
        count += freq[num - k];
        count += freq[num + k];
        freq[num]++;
    }

    return count;
}

int main() {
    vector<int> nums = {1, 2, 2, 1};
    int k = 1;

    cout << countPairs(nums, k);
}