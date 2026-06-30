#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 7;
    int arr[] = {1, 9, 4, 4, 3, 0, 2};

    unordered_map<int , int> countmap;

    for(int i = 0; i < n; i++){
        countmap[arr[i]]++;
    }

    for(auto it: countmap) {
        cout << "Number " << it.first << " Appears " << it.second << endl;
    }
}