#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    // vector<int> arr(n, 5);

    vector<int> arr(n);

    // for(int i = 0; i < n; i++){
    //     int x;
    //     cin >> x;
    //     arr.push_back(x);
    // }

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
   

    // for(int i = 0; i < n; i++){
    //     cout << arr[i] << " ";
    // }

    for(int it: arr){
        cout << it << " ";
    }



}