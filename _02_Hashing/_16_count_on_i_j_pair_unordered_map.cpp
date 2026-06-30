#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

int countpair (vector<int>& arr, int k){
    unordered_map<int, int>freq;
    int count = 0;

    for(int j = 0; j < arr.size(); ++j){
        int complement = k - arr[j];
        if(freq.find(complement)!= freq.end()){
            count += freq[complement];
        }
        freq[arr[j]]++;
    }
    return count++;
}
int main(){
    vector<int> arr = {1, 2, 3, 4, 5};
    int k = 6;
    cout << "count pair " << countpair(arr, k);
}