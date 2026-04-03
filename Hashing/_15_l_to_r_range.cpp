#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int l, r;
    cin >> l >> r;

    vector<int> prefixsum(n+1);

    for(int i =1; i <= n; i++){
        prefixsum[i] = prefixsum[i-1] + arr[i-1];
    }

    int sum = prefixsum[r] - prefixsum[l-1];
    cout << sum;

}