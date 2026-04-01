#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> a(n),b(n),result(n);

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    for(int i = 0; i < n; i++){
        cin >> b[i];
    }

    for(int i = 0; i < n; i++){
        result[i] = a[i]*b[i] ;
    }

    for(int i = 0; i < n; i++){
        cout << result[i] << " ";
    }
}