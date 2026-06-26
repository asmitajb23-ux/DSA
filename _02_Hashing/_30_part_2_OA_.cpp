#include<bits/stdc++.h>
using namespace std;

int currentSubarraySum(const vector<int> & b){
    int n = b.size()-1;
    if(n == 0){
        return 0;
    }
    int T = 0;
    int prv = 0;
    for(int i = 0;  i < n; i++){
        int current = max(prv + b[i], b[i]);
        current = max(current, 0);
        prv = current;
        T = max(T, current);
    }

    return T;
}

int main(){
    int n ;
    cin >> n;

    vector<int> b(n+1);

    for(int i = 0; i < n; i++){
        cin >> b[i];
    }
    
    int result = currentSubarraySum(b);

    cout << result;
}