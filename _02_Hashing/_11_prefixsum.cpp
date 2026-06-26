#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    vector<int> prefixsum(n+1);

    for(int i = 1; i <= n; i++){
        prefixsum[i] = prefixsum[i-1]+arr[i-1];
    }

    for(auto it: prefixsum){
        cout << it << endl;
    }
    return 0;

}