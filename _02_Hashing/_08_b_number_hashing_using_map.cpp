#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 6;
    int arr[] = {1, 2, 3, 5, 5, 9};

    map<int, int> countmap;
    
    for(int i = 0; i < n; i++){
        countmap[arr[i]]++;
    }

    for(auto it : countmap) {
        cout << " Number " << it.first << " Appears " << it.second << " Times" << endl;
    }
    return 0;
}