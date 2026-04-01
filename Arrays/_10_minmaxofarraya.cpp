#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    vector<int> a(n);
    
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int max = a[0];
    int min = a[0];

    for(int i = 0; i < n; i++){
        if(max < a[i]){
            max = a[i];
        }if(min > a[i]){
            min = a[i];
        }
    }       
    cout << max << endl;
    cout << min << endl;
    
}