#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> a(n);

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    int sum = 0;
    int m=n+1;

    for(int i = 0; i < n; i++){
        sum +=a[i];
    }

    int total= m*(m+1)/2;
    int missing = total-sum;
    cout << missing << endl ;
}