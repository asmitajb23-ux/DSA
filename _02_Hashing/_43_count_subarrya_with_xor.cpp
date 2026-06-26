#include<bits/stdc++.h>
using namespace std;


int countsubarraywithXOR(vector<int> &arr, int k){
    unordered_map<int, int>mp;
    int xr = 0;
    int count = 0;

    mp[0] = 1;

    for(int i = 0; i < arr.size(); i++){
        xr = xr ^ arr[i];

        int x = xr ^ k;

        if(mp.find(x) != mp.end()){
            count += mp[x];
        }
        mp[x]++;

    }

    return count;
}
int main(){
    
    vector<int> arr = {4, 2, 2, 6, 4};
    int k = 6;

    cout << countsubarraywithXOR(arr, k) << endl;
    return 0;
}