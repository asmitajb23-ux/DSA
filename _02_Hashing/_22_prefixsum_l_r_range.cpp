#include<bits/stdc++.h>
using namespace std;

vector<int> prefixsum(const vector<int>& nums){
    int n = nums.size();
    vector<int> prefix(n+1,0);

    for(int i = 1; i <= n; ++i){
        prefix[i]= prefix[i-1]+ nums[i];
    }
    return prefix;
}

int sum(const vector<int>& prefix, int l, int r){
        return prefix[r]- prefix[l - 1];
}
int main(){
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> prefix = prefixsum(nums);
    // 4+5+6+7+8=30

    int l = 3, r = 7;
    cout << sum(prefix, l , r);
    
    return 0;
}