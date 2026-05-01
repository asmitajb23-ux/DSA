#include <bits/stdc++.h>
using namespace std;

int maxLength(vector<int>& arr) {  
    int n = arr.size();
    int maxLen = 0; 

    // Loop through each starting point
    for (int i = 0; i < n; i++) {
        int currSum = 0;

        // Try all subarrays starting from 'i'
        for (int j = i; j < n; j++) {
            currSum += arr[j]; 

            // as currSum becomes 0, update maxLen
            if (currSum == 0)
                maxLen = max(maxLen, j - i + 1);
        }
    }
    return maxLen;
}

int main() {
    vector<int> arr = {15, -2, 2, -8, 1, 7, 10};
    cout << maxLength(arr) << endl;
    return 0;
}