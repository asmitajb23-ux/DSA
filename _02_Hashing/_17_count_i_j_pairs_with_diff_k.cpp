#include<bits/stdc++.h>
using namespace std;

int countpairsbruteforce(vector<int>& b, int k){
    int count = 0;
    int n = b.size();
    for(int i = 0; i < n; ++i){
        for(int j = i + 1; j < n; ++j){
            if(b[i]-b[j]==k){
                ++count;
            }
        }
    }
    return count;
}
int main(){
    vector<int> b = {1, 5, 3, 4, 2};
    int k = 2;
    cout << "count pair " << countpairsbruteforce(b, k); 
}