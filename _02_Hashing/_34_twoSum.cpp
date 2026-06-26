// Given an array of integers nums and an integer target,
//  return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, 
// and you may not use the same element twice.

// You can return the answer in any order.

// output 
// target - 9 n = 4 nums = {2, 7, 11, 15}


#include<bits/stdc++.h>
using namespace std;

vector<int> twosum(vector<int>& nums, int target){
    unordered_map<int, int> nummap;
    for(int i = 0; i < nums.size(); i++){
//         If nums[i] = 2 and target = 9
// complement = 9 - 2 = 7
// 👉 We now need to check if 7 exists already
        int complement = target - nums[i];

        if(nummap.find(complement) != nummap.end()){
            return{nummap[complement], i};
            // nummap[complement] = store complement index
            // i = current index
        }
        // stor current number of its index
        nummap[nums[i]] = i;
    }
    return {};
}

int main(){
    int target;
    cin >> target;
    int n;
    cin >> n;

    vector<int> nums(n);

    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    vector<int> result = twosum(nums, target);

    cout << result[0] << " " << result[1] << endl;
}