#include<bits/stdc++.h>
using namespace std;

int countpair(const vector<int>& b, int k){
    unordered_map<int , int > freq;
    int count = 0;

    for(int x: b){
        count += freq[x - k];
        freq[x]++;
    }
    return count;
}
int main(){
    vector<int> b = {5, 3, 2, 4, 1};
    int k = 2;
    cout << countpair(b,k);
}