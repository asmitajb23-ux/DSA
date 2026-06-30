#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int max = INT_MIN;

    vector<int> a(n);

    for(int i = 0; i < n; i++){
        cin >> a[i];

    }
     
    for(int i = 0; i < n; i++){
        max = (max, a[i]);
    }

    cout << max ;
}