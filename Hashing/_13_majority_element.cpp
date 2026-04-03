#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    unordered_map<int , int> freq;

    for(int i = 0; i < n; i++){
        freq[arr[i]]++;
    }

    int maxi = freq[0];
    int majority = arr[0];
    for(auto it : freq){
        if(it.second > maxi){
            maxi = it.second;
            majority = it.first;
        }
    }

    cout << "Majority Element: " << majority << " and its freq is " << maxi;
}