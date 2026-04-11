#include<bits/stdc++.h>
using namespace std;

int countsubarray(vector<int> nums, int k){
    int n = nums.size();
    int count = 0;

    for(int i = 0; i <= n; i++){
        int sum = 0;
        for(int j = i; j < n; j++){
            sum += nums[j];
            if(sum == k){
                count++;
            }
        }
    }
    return count;
}
int main(){
    vector<int> nums = {1, 2, 3, 4, 5, 6};
    int k = 4;
    // (1, 3)
    cout << countsubarray(nums, k);
}