#include<bits/stdc++.h>
using namespace std;

int cntSubarry(vector<int> &arr, int k){
    unordered_map<int, int>mp;
    int count = 0, sum = 0;
    mp[0] = 1;

    for(int i = 0; i < arr.size(); i++){
        sum += arr[i];

        if(mp.find(sum - k) != mp.end()){
            count += mp[sum - k];
        }
        mp[sum]++;
    }
    return count;
}

int main(){
    vector<int> arr = {1, 3, 5};
    int k = 2;

    cout << cntSubarry(arr, k) << endl;
}