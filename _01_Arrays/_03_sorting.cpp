#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    vector<int> arr(n);
    // 7 1 5 3 -5
    // |          |  
    // 1 3 5 7 -5 

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // O( n log(n) )
    sort(arr.begin(), arr.end()); // ascending sort

    sort(arr.rbegin(), arr.rend());// descending sort

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }


}