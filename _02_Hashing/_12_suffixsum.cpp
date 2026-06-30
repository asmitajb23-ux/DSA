#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    vector<int> suffixsum(n+1);

    for(int i = n-1; i >= 0; i--){
        suffixsum[i] = suffixsum[i+1]+arr[i];
    }

    for(auto it: suffixsum){
        cout << it << endl;
    }
    return 0;

}