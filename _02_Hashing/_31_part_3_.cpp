#include<bits/stdc++.h>
using namespace std;

int MaxTwoNonOverlappingSubarraysSum(vector<int>& nums){
    int n = nums.size();
    
    // kadane left
    vector<int>Maxprefix(n);
    int current = nums[0];
    Maxprefix[0]= nums[0];

    for(int i = 1; i < n; i++){
        current = max(nums[i], current + nums[i]);
        Maxprefix[i]= max(Maxprefix[i-1], current);

    }

    // kadane Right
    vector<int>Maxsuffix(n);
    current = nums[n-1];
    Maxsuffix[n-1]=nums[n-1];

    for(int i = n-2; i >= 0; i--){
        current = max(nums[i], current + nums[i]);
        Maxsuffix[i]= max(Maxsuffix[i+1], current);
    }

    
    int Maxsum = INT_MIN;
    for(int i = 0; i < n-1; i++){
        Maxsum = max(Maxsum, Maxprefix[i]+Maxsuffix[i+1]);
    }

    return Maxsum;
}

int main(){
    int n;
    cin >> n;

    vector<int> nums(n);

    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    int result = MaxTwoNonOverlappingSubarraysSum(nums);

    cout << result;

    return 0;
}
