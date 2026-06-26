#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    unordered_map<int , int> freq;

    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        freq[temp]++;
    }

    int q;
    cin >> q;
    while(q--){
        int t;
        cin >> t;

        cout << freq[t] << endl;
    }
}