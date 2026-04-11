#include<bits/stdc++.h>
using namespace std;

int SumOfBruteforce(const vector<int>& nums, int l,int r){
    int sum = 0;

    for(int i = l; i <= r; i++){
        sum += nums[i];
    }
    return sum;
}
int main(){
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8};

    int l = 2, r = 6;
    cout << SumOfBruteforce(nums, l , r);
    return 0;
}