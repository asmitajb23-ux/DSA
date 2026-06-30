#include<bits/stdc++.h>
using namespace std;

int countsubarrayoptimized(vector<int>& nums, int k){
    unordered_map<int, int> freq;
    int sum = 0, count = 0;

    freq[0] = 1;

    for(int x: nums){
        sum += x;

        count += freq[sum - k];  

        freq[sum]++;
    }
    return count;

}
int main(){
    vector<int> nums = {1, 3, 2, -4, 5};

    int k = 2;
    cout <<countsubarrayoptimized(nums, k);
    return 0;
}