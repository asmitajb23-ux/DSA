#include<bits/stdc++.h>
using namespace std;

int MaxSubarraySum(const vector<int>& b){

int n = b.size()-1;
int currentsum = b[0];
int maxsum = b[0];
 
for(int i = 1; i <= n; i++)
{
    currentsum = max(b[i], currentsum + b[i]);
    maxsum = max(maxsum, currentsum);
}
    return maxsum;
}

int main(){
    int n; 
    cin >> n;
    vector<int> b(n+1);

    for(int i = 0; i < n; i++){
        cin >> b[i];
    }
    int result = MaxSubarraySum(b);

    cout << result;

}