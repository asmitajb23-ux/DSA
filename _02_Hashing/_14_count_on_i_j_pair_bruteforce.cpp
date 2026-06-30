#include<bits/stdc++.h>
using namespace std;

int bruteforcecountpair (vector<int>& arr ,int k){
    int count = 0;
    for(int i = 0 ; i < arr.size() - 1; ++i){
        for(int j = i + 1; j < arr.size(); ++j){
            if(arr[i] + arr[j] == k){
                count++;
            }
        }
    }
    return count;
}
int main(){
    vector<int> arr ={1, 2, 3, 4, 5};
    int k = 6;
    cout << "count of pair " <<  bruteforcecountpair(arr,k);
    return 0;
}
