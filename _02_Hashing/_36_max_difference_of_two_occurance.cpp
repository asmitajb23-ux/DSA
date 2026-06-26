#include<bits/stdc++.h>
using namespace std;

int maxDistance(vector<int>& arr) {
  
    // Stores element to first index mapping
    unordered_map<int, int> mp; 
  
    int res = 0;
  
    for (int i = 0; i < arr.size(); i++) {
      
        // If this is the first occurrence of 
        // the element, store its index
        if (mp.find(arr[i]) == mp.end())
            mp[arr[i]] = i;
      
        // Else update max distance
        else
            res = max(res, i - mp[arr[i]]);
    }

    return res;
}

int main() {
    vector<int> arr = {1, 1, 2, 2, 2, 1};
    cout << maxDistance(arr);
    return 0;
}