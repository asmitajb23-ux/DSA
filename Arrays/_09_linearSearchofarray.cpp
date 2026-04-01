#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    vector<int> a(n);

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int search;
    cin >> search;
    for(int i = 0; i < n; i++){
        if(a[i]==search){
            cout << i+1 << endl; 
            return 0;
        }
    }
        cout << "NOT FOUND" << endl;
    
}